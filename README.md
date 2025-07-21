# Space Instrumentation for Attitude Determination on a 3U CubeSat

This project focuses on the design and performance evaluation of an Attitude Determination System (ADS) for a 3U CubeSat in a circular orbit at 600 km altitude and 51° inclination. The goal is to ensure full 3-axis attitude determination with an accuracy better than 1° (2σ confidence level), valid across all RAAN values and within solar elevation angles of ±23.4°.

## Objectives

- Select and position commercial off-the-shelf (COTS) attitude sensors to meet strict mission constraints:
  - **Volume budget**: 1U (1×10⁻³ m³)
  - **Power budget**: 2 W
  - **Mass budget**: 0.3 kg
- Validate system performance through simulation in MATLAB/Simulink.
- Ensure consistent attitude estimation accuracy over a full orbital propagation.

## Simulation Architecture

- **Simulink Orbital Propagation**: A detailed simulation using the *Spacecraft Dynamics* block models a full two-orbit propagation (11,603 s), computing attitude angles, position vectors, and reference vectors (Sun, Nadir, Star).
- **Reference Frame**: The CubeSat operates in LVLH frame with a constant nadir-pointing profile, aligned with the orbital frame.
- **Environmental Effects**: Simplified simulation without third-body or atmospheric drag perturbations (included in GMAT cross-check).
- **Sensor Perturbation**: Simulated using Gaussian noise based on each sensor’s accuracy to assess its impact on attitude estimates.
- **Attitude Estimation**: The QuEST (Quaternion ESTimator) algorithm is used to compute the estimated attitude from perturbed measurements.
- **Error Covariance Analysis**: Statistical analysis of the attitude errors over the full orbit propagation yields the 3D uncertainty ellipsoid at 2σ confidence level.
