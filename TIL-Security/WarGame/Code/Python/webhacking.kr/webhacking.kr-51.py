import hashlib

i = 0;
hash = hashlib.md5(str(i))

while (hash.digest().find("'='") == -1):
    i+=1
    hash = hashlib.md5(str(i))
    print hash.digest()

print 'result',hash.digest(),i # digest is return string