#pragma once
#include <string>

class AUV {
    private:
        std::string name;
        Point position;
        double depth;
        double heading;
        std::array<double, 3> speed;
        double angular_speed;


    public:
        AUV(std::string name, Point position, double depth, double heading, std::array<double, 3> speed, double angular_speed);

        void step(const double &dt);
        void apply_acceleration(std::array<double, 3> accel, const double &dt);
        void apply_angular_acceleration(double angular_acceleration, const double &dt);
        

        std::string _name() {
            return name;
        }

        Point _position() {
            return position;
        }

        double _depth() {
            return depth;
        }

        double _heading() {
            return heading;
        }

        std::array<double, 3> _speed() {
            return speed;
        }

        double _angular_speed() {
            return angular_speed;
        }

        void setName(std::string newName) {
            name = newName;
        }

        void setPosition(Point newPosition) {
            position = newPosition;
        }


        void setDepth(double newDepth) {
            depth = newDepth;
        }

        void setHeading(double newHeading) {
            heading = newHeading;
        }

        void setSpeed (std::array<double, 3> newSpeed) {
            speed = newSpeed;
        }

        void setAngular_speed (double newAngular_speed) {
            angular_speed = newAngular_speed;
        }



    
};