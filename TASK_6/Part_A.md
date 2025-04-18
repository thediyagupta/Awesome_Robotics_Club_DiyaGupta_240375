
I would use an hybrid mechanism(tracked and legged).because climbing requires both stability and adabtibility to varying step heights or angles.

 

I choose a **hybrid mechanism** that combines tracked and legged systems.

Climbing stairs can be tricky because it involves both **vertical movement** and **stability on uneven terrain**. I felt that relying on a single mechanism like wheels or legs alone might not be sufficient for all kinds of stairs—especially irregular or damaged ones. That’s why I opted for a **hybrid approach**, combining the strengths of both **tracks** and **legs**.

### advantages of Tracked?

- Tracks are great for providing continuous contact and traction.
- They distribute the robot’s weight evenly and are efficient at climbing **regular, shallow stairs**.
- They also perform well on inclined and rough surfaces.

However, I realized that tracks alone would struggle with:

- **Tall vertical rises**
- **Broken or irregular steps**

### Why Legs?

- Legs offer **adaptability**. They can step over obstacles or adjust to different stair heights.
- They give the robot more freedom to **balance** and reposition itself when needed.

But legs have their downsides too—they're complex to control and not as energy-efficient.

### Why Both?

By combining both systems:

- The **tracks handle efficient climbing** on standard stairs.
- The **legs kick in** when the robot encounters irregular or more challenging obstacles.
- This allows the robot to perform in **a wider range of real-world environments**—from household stairs to rubble in disaster zones

### Stability

Stability is achieved by using tracked mechanism
Because the track is in **constant contact** with the ground over a large surface area, it provides better grip and distributes weight more evenly than wheels.
Because more of the robot is in contact with the ground, tracked robots can **climb slopes and stairs** with greater stability and less risk of tipping.

COM: centre of mass would be kept as low as possible to ensure stability.

### Sensors Used:

1. IMU:
    - Helps monitor the robot’s orientation, tilt, and balance.
    - Crucial for maintaining stability on inclined or uneven steps.
2. Vision Sensor **:**
    - Captures a 3D view of the environment.
    - Allows the robot to measure stair height, depth, and irregularities before climbing.
    - Enables step detection and helps decide when to switch between track and leg modes.
3. Ultrasonic Sensors ****(Front & Downward Facing):
    - Measures distance to nearby steps or walls.
    - Useful for short-range obstacle detection and edge detection to prevent falling.

### Control Logic

- First the vision camera along with the Ultrasonic sensor  will detect the step (height, depth) and accordingly the mode is switched between tracked and wheeled.
- If stairs are regular and low → use tracks for energy-efficient climbing. and if they re steep or irregular → use legs.
- IMU checks for stability while climbing.
- PID or similar logic can be used to calculate optimal path for next few steps.
