class PartyAnimal():
    x=0
    
    def __init__(self):
        print("constructor")
        
        
    def party(self):
        self.x = self.x + 1;
        print("so far ", self.x)
    def __del__(self):
        print("des ")
        
        
        
        
        
class FootballFan(PartyAnimal):
    point=0
    
    def points(self):
        self.point = self.point + 7
        self.party()
        print(self.point)
        print(self.x)
        
a = PartyAnimal()
a.party()
a.party()

b = FootballFan()
b.party()
b.points()

