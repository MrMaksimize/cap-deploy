server '127.0.0.1', :app, :web, :primary => true
set :user, "vagrant"
set :port, 2222
ssh_options[:keys] = [File.join(ENV["HOME"], ".vagrant.d", "insecure_private_key")]
default_run_options[:shell] = '/bin/bash'

set :branch, 'master'

task :build do
  run "cd #{drupal_path}"
  puts "Installing the database."
  run "drush sqlc < ../../build/ref_db/#{ref_db_name}"
  run "drush updb -y"
  run "drush rr -y"
  run "drush fra -y"
  run "drush updb -y"
  run "drush cc all"
end

task :wrap do
  puts "Wrappin...."
  run "mkdir -p #{current_deploy}/src"
  run "cd #{current_deploy} && mv *[!src]* src/ && mv .*[a-zA-Z] src/"
  run "cd #{current_deploy} && cp -r src/dev/* ."
end

after "deploy", "wrap"

#before "deploy:update_code", "backup_site"
#before "deploy:update_code", "backup_database"

#after "deploy:update_code", "apply_changes"
