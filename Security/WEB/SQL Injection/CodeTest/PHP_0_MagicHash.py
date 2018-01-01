import md5

m = md5.new()

def func(s):
     print "test\"",s,"\""
     if len(s) == 33:
             return

     m.update(s)
     tmp = m.hexdigest()
     if tmp[0:2] == "0e":
             try:
                    int(tmp[2:len(tmp)])
                    print "Find Hash",s,tmp
             except ValueError:
                     pass
     for c in "0123456789ABCDEFGHIJKLNMOPQRSTUVWXYZabcdefghijklnmopqrstuvwxyz":
             func(s+c)

func("")