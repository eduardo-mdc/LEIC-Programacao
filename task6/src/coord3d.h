//
// Created by dudud on 13/12/2021.
//

#ifndef TASK6_COORD3D_H
#define TASK6_COORD3D_H

using namespace std;
namespace leic {
    class coord3d {
        private:
            int x,y,z;
        public:
            coord3d();
            coord3d(int vx, int vy, int vz);
            coord3d(const coord3d& c);
            int getX() const;
            int getY() const;
            int getZ() const;
            void setX(int vx);
            void setY(int vy);
            void setZ(int vz);
            coord3d& operator+=(const coord3d& c);
            coord3d operator+(const coord3d& c) const;
    };
}

#endif //TASK6_COORD3D_H
