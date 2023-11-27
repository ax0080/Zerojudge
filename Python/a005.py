def output_list(num):
  for i in num:
    print("%d "%(i),end='')

testtime=int(input()) #輸入幾個數列
for i in range(0,testtime):
  series=input()
  templist=series.split()#文字串列
  
  num=[]
  for i in range(0,len(templist)):
    num.append(int(templist[i])) 
    

  if(num[1]*2==num[0]+num[2])and(num[2]*2==num[1]+num[3]):
    output_list(num)
    print(num[3]*2-num[2])
  else:
    output_list(num)
    print(int(num[3]**2/num[2]))