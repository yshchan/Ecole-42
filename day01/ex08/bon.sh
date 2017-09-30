ldapsearch -QLLL "sn=*bon*" | grep 'sn: ' | wc -l | tr -d ' '
