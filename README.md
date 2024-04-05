# Building Height Estimator

This program estimates the height of a building based on the observer's height, the distance to the building, and the angle of elevation observed.

## Usage

1. Compile the program using the following command:
    ```bash
    gcc building_height_estimator.c -o building_height_estimator -lm
    ```

2. Run the compiled executable:
    ```bash
    ./building_height_estimator
    ```

3. Enter the required information when prompted:
    - Observer's height (in meters)
    - Distance to the building (in meters)
    - Angle of elevation observed (in degrees)

4. The program will calculate and display the estimated height of the building.

## Example

Enter your height (in meters): 1.7
Enter the distance to the building (in meters): 20
Look up at the top of the building and measure the angle of elevation (in degrees): 30
The estimated height of the building is approximately: 10.40 meters

arduino
Copy code

## Formula Explanation

The program uses trigonometric principles to estimate the height of the building. It calculates the height using the tangent function:

height_of_building = distance_to_building * tan(angle_of_elevation_radians) + observer_height

vbnet
Copy code

## Exercise

Try running the program with different observer heights, distances to the distances to the building, and angles of elevation to see how they affect the estimated height of the building.