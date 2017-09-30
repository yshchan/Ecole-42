ldapsearch -QLLL uid="z*" cn | grep "cn" | sort -rdf | cut -c5-
