# This program has an target to receive a edge of cube and then
# calculate its surface area and volume.



def cube_surface(_edge_are: float) -> float:
    """
    Calculate the surface area from cube
    """
    return 6 * (pow(_edge_are, 2))


def cube_volume(surface: float) -> float:
    """
    Calculate the volume from cube
    """
    return pow(surface, 3)


def main():
    """
    Main function
    """
    edge = float(input("Enter the edge length of the cube: "))
    surface_area = cube_surface(edge)
    volume = cube_volume(surface_area)
    print(f"The surface area of the cube is: {surface_area}")
    print(f"The volume of the cube is: {volume}")
    

if __name__ == "__main__":
    main()