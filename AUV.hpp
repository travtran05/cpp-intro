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

        void step();
        void apply_acceleration();
        void apply_angular_acceleration();
        

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

        

    
};