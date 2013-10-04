server 'capdev.dev', :app, :web, :primary => true
set :branch, 'promet'

before "deploy:update_code", "backup_site"
before "deploy:update_code", "backup_database"

after "deploy:update_code", "apply_changes"
