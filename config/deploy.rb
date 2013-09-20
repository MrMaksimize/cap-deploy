set :stages, %w(prod dev local)
set :default_stage, "dev"
require 'capistrano/ext/multistage'

set :application, "capdeploy"
set :user, "vagrant"
set :group, "www-data"

set :repository,  "https://github.com/dsdobrzynski/cap-deploy"

set :scm, :git # You can set :scm explicitly or Capistrano will make an intelligent guess based on known version control directory names
# Or: `accurev`, `bzr`, `cvs`, `darcs`, `git`, `mercurial`, `perforce`, `subversion` or `none`

set :deploy_to, "/var/drupals/capdeploy"
set :deploy_via, :remote_cache

# if you want to clean up old releases on each deploy uncomment this:
# after "deploy:restart", "deploy:cleanup"

# if you're still using the script/reaper helper you will need
# these http://github.com/rails/irs_process_scripts

# If you are using Passenger mod_rails uncomment this:
# namespace :deploy do
#   task :start do ; end
#   task :stop do ; end
#   task :restart, :roles => :app, :except => { :no_release => true } do
#     run "#{try_sudo} touch #{File.join(current_path,'tmp','restart.txt')}"
#   end
# end

task :backup_database, :roles => :web do
  run "drush sql-dump --root=#{deploy_to}/current/www --result-file=#{deploy_to}/build/backups/$(date +%m-%d-%Y-%H-%M-%S)_db.sql"
end

before :deploy, :backup_database
