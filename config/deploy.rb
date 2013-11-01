set :stages, %w(prod dev local)
set :default_stage, "local"
require 'capistrano/ext/multistage'

set :application, "cm22deploy"
set :user, "vagrant"
set :group, "www-data"

set :scm, :git
set :repository,  "git@github.com:MrMaksimize/CM22Slave.git"
set :scm_passphrase, ""
set :deploy_to, "/vagrant/rtests"
set :current_deploy, "/vagrant/rtests/current"
set :deploy_via, :remote_cache

set :drupal_path, "#{deploy_to}/build"
set :src_path, "#{deploy_to}/src"
#set :ref_db_name, "capdeploy_db.sql"



#task :backup_site do
#  run "drush archive-dump --root=#{deploy_to}/current/www --destination=#{deploy_to}/build/backups/site/$(date +%m-%d-%Y-%T)_site.tar"
#end

#task :backup_database do
#  run "drush sql-dump --root=#{deploy_to} --result-file=#{deploy_to}/build/backups/db/$(date +%m-%d-%Y-%T)_db.sql"
#end

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
