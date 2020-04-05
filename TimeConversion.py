s=input()
s_split=s.split(':')
hour=int(s_split[0])
minute=int(s_split[1])
print(hour)
print(minute)

out=[(s_split[2][i:i+2]) for i in range(0, len(s_split[2]), 2)]
second=int(out[0])
if(out[1]=='AM'):
    print(f'{hour:02d}:{minute:02d}:{second:02d}')
else:
    print(f'{hour+12:2d}:{minute:2d}:{second:2d}')
