class AppleBasket():
    def __init__(self,s,n):
        self.color = s
        self.apple_quantity = n
        
    def increase(self):
        self.apple_quantity +=1
        
    def __str__(self):
        return "A basket of {} {} apples.".format(self.apple_quantity,self.color)
    
a = AppleBasket('green',17)
print(a)
