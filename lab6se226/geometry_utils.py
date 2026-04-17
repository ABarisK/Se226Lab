def circle_area(radius):
    if(radius <= 0):
        print("radius can not be equal to 0 or negative value!!")
        return
    return 3.14*(radius**2)

def circle_perimeter(radius):
    if (radius <= 0):
        print("radius can not be equal to 0 or negative value!!")
        return
    return 2*3.14*radius

def rectangle_area(width, height):
    if (width<= 0 or height<= 0):
        print("values can not be equal to 0 or negative value!!")
        return
    return width*height

def rectangle_perimeter(width, height):
    if (width<= 0 or height<= 0):
        print("values can not be equal to 0 or negative value!!")
        return
    return 2*width+height*2

def triangle_area(base, height):
    if (base<= 0 or height<= 0):
        print("values can not be equal to 0 or negative value!!")
        return
    return (base*height)/2

