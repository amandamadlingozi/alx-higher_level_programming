#!/usr/bin/python3
"""Defines the Rectangle class."""

from models.base import Base

class Rectangle(Base):
    """Rectangle class inherits from Base."""

    def __init__(self, width, height, x=0, y=0, id=None):
        """Initialize Rectangle instance."""
        super().__init__(id)
        self.width = width
        self.height = height
        self.x = x
        self.y = y

        @property
        def width(self):
            """Getter for width attribute."""
            return self.__width

        @width.setter
        def width(self, value):
            """Setter for width attribute."""
            self.__width = value

            @property
            def height(self):
                """Getter for height attribute."""
                return self.__height

            @height.setter
            def height(self, value):
                """Setter for height attribute."""
                self.__height = value

                @property
                def x(self):
                    """Getter for x attribute."""
                    return self.__x

                @x.setter
                def x(self, value):
                    """Setter for x attribute."""
                    self.__x = value

                    @property
                    def y(self):
                        """Getter for y attribute."""
                        return self.__y

                    @y.setter
                    def y(self, value):
                        """Setter for y attribute."""
                        self.__y = value

                        # Test cases
                        if __name__ == "__main__":
                            r1 = Rectangle(10, 2)
                            print(r1.id)

                            r2 = Rectangle(2, 10)
                            print(r2.id)

                            r3 = Rectangle(10, 2, 0, 0, 12)
                            print(r3.id)

