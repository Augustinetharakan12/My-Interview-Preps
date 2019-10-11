months = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November","December"]
dates = [31,28,31,30,31,30,31,31,30,31,30,31]
t = int(input())
for a0 in range(t) :
    dd, mm, yyyy = input().split(' ')
    dd, yyyy = int(dd),int(yyyy)
    
    if mm == "March" and dd == 1 and yyyy % 4 == 0 and yyyy % 100 != 0 :
        dd = 29
        mm = "February"
    
    elif mm == "March" and dd == 1 and yyyy % 400 == 0 :
        dd = 29
        mm = "February"
    
    elif dd == 1 and mm == "January" :
        dd= 31
        mm = "December"
        yyyy -= 1
    
    elif dd == 1:
        dd = dates[months.index(mm) - 1]
        mm = months[months.index(mm) - 1]
        
    else:
        dd -= 1
    print(dd,mm,yyyy)
