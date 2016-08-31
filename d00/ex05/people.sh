ldapsearch  -x "uid=z*" | grep cn: | sed 's/cn: //' | sort -r
