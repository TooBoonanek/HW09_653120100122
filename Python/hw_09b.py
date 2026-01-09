from enum import Enum
from abc import ABC, abstractmethod


class Color(Enum):
    BLACK = 0
    WHITE = 1
    GREY = 2
    BROWN = 3
    DARK_BROWN = 4
    BLACK_STRIPES = 5
    WHITE_STRIPES = 6


class Size(Enum):
    SMALL = 0
    MEDIUM = 1
    LARGE = 2
    HUGE = 3


class Animal(ABC):
    def __init__(self, color: Color, size: Size):
        self._color = color
        self._size = size

    @abstractmethod
    def sound(self):
        pass

    @abstractmethod
    def eat(self):
        pass


class Mammalia(Animal):
    def __init__(self, color, size, number_of_babies: int = 1):
        super().__init__(color, size)
        self._number_of_babies = number_of_babies

    @abstractmethod
    def run(self):
        pass


class Dog(Mammalia):
    def __init__(self, color, size, number_of_babies=1, fierce: bool = False):
        super().__init__(color, size, number_of_babies)
        self._fierce = fierce

    @abstractmethod
    def bark(self):
        pass

    @abstractmethod
    def bite(self):
        pass


class ThaiRidgeBack(Dog):
    def __init__(self, color: Color = Color.BROWN, size: Size = Size.MEDIUM, number_of_babies=1, fierce=False, origin: str = "Thailand"):
        super().__init__(color, size, number_of_babies, fierce)
        self._origin = origin
        
    def sound(self):
        return "Woof!!!"
    
    def eat(self):
        return "Meat"
    
    def run(self):
        return "Running"
    
    def bark(self):
        return "Bark"
    
    def bite(self):
        return "bite"
        
    def info(self):
        return f"ThaiRidgeBack: [ Color: {self._color.name}, Size: {self._size.name}, Sound: {self.sound()}, Eat: {self.eat()}, Bark: {self.bark()}, Bite: {self.bite()}, Origin: {self._origin} ]"


class Aves(Animal):
        
    @abstractmethod
    def fly(self):
        pass


class Bird(Aves):
    def __init__(self, color, size, egg: str = "Egg"):
        super().__init__(color, size)
        self._egg = egg


class HummingBird(Bird):
    def __init__(self, color: Color = Color.WHITE , size: Size = Size.SMALL, egg = "Egg"):
        super().__init__(color, size, egg)
        
    def sound(self):
        return "Hum"

    def eat(self):
        return "Nectar"
    
    def fly(self):
        return "Flying"
    
    def info(self):
        return f"Humming Bird: [ Color: {self._color.name}, Size: {self._size.name}, Egg: {self._egg}, Fly: {self.fly()} Sound: {self.sound()}, Eat: {self.eat()} ]"


class Osteichthyes(Animal):
    
    @abstractmethod
    def swimming(self):
        pass


class Fish(Osteichthyes):
    def __init__(self, color, size, water_group: str = "fresh water"):
        super().__init__(color, size)
        self._water_group = water_group


class AngelFish(Fish):
    def __init__(self, color: Color = Color.GREY, size: Size = Size.LARGE, water_group="salt water", location: str = "Sea"):
        super().__init__(color, size, water_group)
        self._location = location
        
    def sound(self):
        return "..."
    
    def eat(self):
        return "Plankton"
        
    def swimming(self):
        return "Swimming in the sea"
        
    def info(self):
        return f"Angel Fish: [ Color: {self._color.name}, Size: {self._size.name}, Water Group: {self._water_group}, Location: {self._location}, Swimming: {self.swimming()} Sound: {self.sound()}, Eat: {self.eat()} ]"


dog = ThaiRidgeBack()
print(dog.info())

bird = HummingBird()
print(bird.info())

fish = AngelFish()
print(fish.info())