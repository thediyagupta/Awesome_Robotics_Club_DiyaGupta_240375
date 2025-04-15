In case  Midway through the climb, **one side of the crawler (left or right) stops** due to a **motor fault or gear jam**.
This willl cause the robot to lose its straight path and possibly move **diagonally or sideways**, which is dangerous on stairs.
the legs on the stuck side might try to compensate, increasing the strain and possibly causing further imbalance.imu will detect the unusual tripping of bot. ALso the vision sensors and ultrasonic sensors will detect the sudden unexpected changes in input.

### How would I prevent such fall?

Firstly with the help of IMU and vision sensors, the side which has stopped working will be detected.

Then power or torque to the opposite side wheels will be reduced to balance out the sideways motion.

The legs of the opposite side will extend or reposition in such a way to rebalance the bot.
