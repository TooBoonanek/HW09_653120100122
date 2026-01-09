import math
from abc import ABC, abstractmethod

class Shape(ABC):
    def __init__(self, name:str="Unknow"):
        self._name = name
    
    @abstractmethod
    def area(self):
        pass
    
    @abstractmethod
    def info(self):
        pass
    
class Circle(Shape):
    def __init__(self, name = "Circle", radius:float=1):
        super().__init__(name)
        self._radius = radius
        
    def area(self):
        return math.pi * self._radius ** 2
    
    def info(self):
        return f"{self._name}: radius = {self._radius}, area = {self.area():.2f}"
    
class Cylinder(Circle):
    def __init__(self, name="Cylinder", radius = 1, length:float = 1):
        super().__init__(name, radius)
        self._length = length
        
    def area(self):
        return 2 * super().area() + 2 * math.pi * self._radius * self._length
    
    def volume(self):
        return super().area() * self._length
    
    def info(self):
        return f"{self._name}: radius = {self._radius}, length = {self._length}, area = {self.area():.2f}, volume = {self.volume():.2f}"
    
class Rectangle(Shape):
    def __init__(self, name = "Rectangle", width:float = 1, height:float = 1 ):
        super().__init__(name)
        self._width = width
        self._height = height
        
    def area(self):
        return self._width * self._height

    def info(self):
        return f"{self._name}: width = {self._width}, height = {self._height}, area = {self.area():.2f}"
    
class Polygon(Rectangle):
    def __init__(self, name="Polygon", width = 1, height = 1, n:int=1):
        super().__init__(name, width, height)
        self._n = n
    
    def area(self):
        return (0.5 * self._width * self._height) * self._n
    
    def volume(self):
        return super().area() * self._height
    
    def info(self):
        return f"{self._name}: width = {self._width}, height = {self._height}, area = {self.area():.2f}, volume = {self.volume()}"
    
    
cir1 = Circle( radius=5.0 )
print(cir1.info())

cy1 = Cylinder( radius=2.0, length=6.0 )
print(cy1.info())

rec1 = Rectangle( width=3.0, height=4.0 )
print(rec1.info())

po1 = Polygon( width=2.0, height=4.0, n=5 )
print(po1.info())