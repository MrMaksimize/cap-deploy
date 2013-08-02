set :stages, %w(development)
set :default_stage, "development"
require 'capistrano/ext/multistage'

set :application, "site-deploy"
set :user, "vagrant"
# set :group, "dialout"
set :use_sudo, false

set :scm, :git
set :repository,  "https://github.com/dsdobrzynski/cap-deploy.git"
set :scm_passphrase, ""
set :deploy_to, "/var/drupals/capistrano"
set :deploy_via, :remote_cache

task :uname do
  run "uname -a"
end

# role :web, "your web-server here"                          # Your HTTP server, Apache/etc
# role :app, "your app-server here"                          # This may be the same as your `Web` server
# role :db,  "your primary db-server here", :primary => true # This is where Rails migrations will run
# role :db,  "your slave db-server here"

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
