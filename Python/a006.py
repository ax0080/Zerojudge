coeff=input().split()
for i in range(0,len(coeff)):
  coeff[i]=int(coeff[i])

a=coeff[0]
b=coeff[1]
c=coeff[2]

d=b**2-4*a*c

if(d<0):
  print("No real root")
else:
  x1=int((-1*b+d**0.5)/2/a)
  x2=int((-1*b-d**0.5)/2/a)
  if(d==0):
    print("Two same roots x=%d" % (int(-1*b/2/a)))
  elif(d>0 and x1>x2):
    print("Two different roots x1=%d , x2=%d" % (x1,x2))
  elif(d>0 and x2>x1):
    print("Two different roots x1=%d , x2=%d" % (x2,x1))