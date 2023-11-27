inside=input()
num=inside.split( )
m=int(num[0])
d=int(num[1])
ans=(m*2+d)%3
if ans==0:
  print("普通")
elif ans==1:
  print("吉")
elif ans==2:
  print("大吉")