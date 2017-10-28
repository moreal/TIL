import urllib2
import urllib

baseurl = "http://webhacking.kr/challenge/web/web-10/?no="


# urlencode is important
def checkstr(str,j): # banned char '#', '&', '*', '+', '-', '/', '<', '=', '>', '@', '_', '|'
    a = []
    for i in ' abcdefghijklnmopqrstuvwxyz':
        if(j > 0):
            a.append(checkstr(str + i, j - 1))

        req = urllib2.Request(baseurl + urllib.quote(str + i))
        req.add_header('Cookie', 'PHPSESSID=8b699167933f2cbdf5bf2b3f7ef91061')

        content = urllib2.urlopen(req).read()

        if (content.find('no hack') != -1):
            print 'Find banned str : ' + str + i
            a.append(str + i)

    return a

def checkchar(): # banned char '#', '&', '*', '+', '-', '/', '<', '=', '>', '@', '_', '|'
    a = []
    for i in range(32, 127):
        print chr(i)
        req = urllib2.Request(baseurl + urllib.quote(chr(i)))
        req.add_header('Cookie', 'PHPSESSID=8b699167933f2cbdf5bf2b3f7ef91061')

        content = urllib2.urlopen(req).read()

        if (content.find('no hack') != -1):
            print 'Find banned char : ' + chr(i)
            a.append(chr(i))

    print a
    exit(0)

def inputcheckstr():
    a=[]
    #for


print checkstr('', 5)

def checknum():
    for i in range(0, 500):
        print str(i)
        req = urllib2.Request(baseurl + str(i))
        req.add_header('Cookie', 'PHPSESSID=8b699167933f2cbdf5bf2b3f7ef91061')

        content = urllib2.urlopen(req).read()

        if (content.find('<td>1</td>') != -1):
            print 'search : ' + str(i)
