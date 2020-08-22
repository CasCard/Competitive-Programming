import re

Nameage = '''
Janice is 22 and Theon is 33
Gabriel is 44 and Joey is 21
'''
ages = re.findall(r'\d{1,3}', Nameage)
names = re.findall(r'[A-Z][a-z]*', Nameage)

ageDict = {}
x = 0
for eachname in names:
    ageDict[eachname] = ages[x]
    x += 1

print(ageDict)
# 1) find a word in a string
allinform = re.findall("inform", "we need to inform him with the latest information")
for i in allinform:
    print(i)
# 2) generate an iterator
str = "we need to inform him with the latest information"
for i in re.finditer("inform", str):
    locTuple = i.span()
    print(locTuple)
#     3) Match one of any of several letters
str = "Sat, hat, mat, pat, gat"
allstr = re.findall("[shmp]at", str)
for i in allstr:
    print(i)
#  4) Match series of range of characters
Str = "Sat, hat, mat, pat"
someStr = re.findall("[^h-m]at", Str)
for i in someStr:
    print(i)
#     5)Replace a particular string
Food = 'hat rat mat pat'
regex = re.compile("[r]at")
Food = regex.sub("food", Food)
print(Food)

# Backslash Problem
randstr = "here is \\drogba"
print(re.search(r"\\drogba", randstr))
# 6) match a single character
randstr = "12345"
print("Matches:", len(re.findall("\d{5}", randstr)))
# working with white spaces
randstr = '''
Keep the blue flag
flying high 
Chelsea
'''
print(randstr)
regex = re.compile("\n")
randstr = regex.sub(" ", randstr)
print(randstr)
# \b: backspace
# \f: formfeed
# \r: carriage Return
# \v: Vertical tab
num = "123 1234 12345 123456 1234567"
print("Matches:", len(re.findall("\d{5,7}", num)))
# Phone number verification
# \w [a-zA-Z0-9]
# \W [^a-zA-Z0-9]
phone = "412-555-1212"
if re.search("\w{3}-\w{3}-\w{4}", phone):
    print("Its a number")
else:
    print("not a number")
# \s [\f\n\r\t\v]
# \S [^\f\n\r\t\v]
if re.search("\w{2,20}\s\w{2,20}", "Abel Dixon"):
    print("FName is Valid")
else:
    print("not valid")

# verify email address
email = "sk@aol.com md@.com @seo.com dc@.com"
print("EmailMatches:", len(re.findall("[\w._%+-]{1,20}@[\w.-]{2,20}.[A-Za-z]{2,3}", email)))
# Web scraping
import urllib.request
from re import findall

url = "https://www.summet.com/dmsi/html/codesamples/addresses.html"
response = urllib.request.urlopen(url)
html = response.read()
htmlStr = html.decode()
pdata = findall("\(\d{3}\) \d{3}-\d{4}", htmlStr)
for item in pdata:
    print(item)
