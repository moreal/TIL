"""
The Problem :
As on most challenge sites, there are some beginner cryptos, and often you get started with the good old caesar cipher.
I welcome you to the WeChall style of these training challenges :) Enjoy!

Caesar cipher

Make "ABC" to "DEF"

XLI UYMGO FVSAR JSB NYQTW SZIV XLI PEDC HSK SJ GEIWEV ERH CSYV YRMUYI WSPYXMSR MW HJFIVGSKHFPK

"""

def CaesarCiperBig(temp, i):
    result = ''
    t = 0
    for i in range(0, len(temp)+1):

        if(temp[i] == ' '):
            result += ' '
            continue

        print i, temp[i]
        t = ord(temp[i]) - ord('A')

        print 'Before', t
        if(t > ord('Z')):
            t = t - ord('Z') + ord('A')

        print 'After', t

        result += chr(t)

    return result

for i in range(1, 27):
    print i
    print 'Result', CaesarCiperBig("XLI UYMGO FVSAR JSB NYQTW SZIV XLI PEDC HSK SJ GEIWEV ERH CSYV YRMUYI WSPYXMSR MW HJFIVGSKHFPK", i)