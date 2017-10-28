import urllib2

url = 'http://webhacking.kr/challenge/bonus/bonus-6/l4.php'

connection = urllib2.Request(url)
connection.add_header('Cookie','PHPSESSID=2bf8d5d0862cc38166a5452c0910f556')