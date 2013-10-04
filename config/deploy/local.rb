server 'capdeploy.dev', :app, :web, :primary => true
set :branch, 'promet'

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

before "deploy:update_code", "backup_site"
before "deploy:update_code", "backup_database"

after "deploy:update_code", "apply_changes"
