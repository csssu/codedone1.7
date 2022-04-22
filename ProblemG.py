
# author: Amir Hossein Khaksar

n = int(input())
s = input()

for i in range(n):
    if(s[i] >= 'a'):
        s = s[:i] + chr(ord('A') + (ord(s[i]) - ord('a'))) + s[i + 1:]
        
d=''

for i in range(n):
    if(s[i] not in d):
        d = d + s[i]
        
if(len(d) == 26):
    print("YES")
else:
    print("NO")