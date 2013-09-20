set :stages, %w(prod dev local)
set :default_stage, "dev"
require 'capistrano/ext/multistage'

set :application, "capdeploy"
set :user, "vagrant"
set :group, "www-data"

set :scm, :git
set :repository,  "https://github.com/dsdobrzynski/cap-deploy.git"
set :scm_passphrase, ""
set :deploy_to, "/var/drupals/capdeploy"
set :deploy_via, :remote_cache

task :backup_site do
  run "drush archive-dump --root=#{deploy_to}/current/www --destination=#{deploy_to}/build/backups/site/$(date +%m-%d-%Y-%T)_site.tar"
end

task :backup_database do
  run "drush sql-dump --root=#{deploy_to} --result-file=#{deploy_to}/build/backups/db/$(date +%m-%d-%Y-%T)_db.sql"
end

task :apply_changes do
  run "cd #{deploy_to}/current/www"
  run "drush updb -y"
  run "drush rr -y"
  run "drush fra -y"
  run "drush updb -y"
  run "drush cc all"
end

before "deploy:update_code", "backup_site"
before "deploy:update_code", "backup_database"

after "deploy:update_code", "apply_changes"

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
