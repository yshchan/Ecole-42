find . -name "*.sh" -type f | sed 's/.*\///' | cut -d '.' -f1
