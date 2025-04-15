TASK 5 - Hexapod Inverse Kinematics Solution

Approach

The hexapod leg is modeled as a 3-DOF manipulator with three joints: base rotation (θ1), hip (θ2), and knee (θ3). Given a target (x, y, z) coordinate, the inverse kinematics function calculates the required joint angles using trigonometry and the law of cosines.

- θ1 is calculated using `atan2(y, x)` for planar rotation.
- The projected distance from the hip joint to the target is used for θ2 and θ3.
- The leg's reach is validated before computing angles.
- Results are returned in degrees and rounded to two decimal places.

Test Cases
Five test cases are included to verify the solution, printing the target coordinates, computed joint angles, and whether the position is reachable
