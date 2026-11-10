//
// Created by Phili on 11/3/2026.
//

#ifndef RAWENGINE_CAMERA_H
#define RAWENGINE_CAMERA_H
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

#endif //RAWENGINE_CAMERA_H



namespace core {
    class Camera {
    private:
        glm::vec3 cameraPos;
        glm::vec3 cameraTarget;
        glm::vec3 up;
        glm::vec3 cameraDirection;
        glm::vec3 cameraRight;
        glm::vec3 cameraUp;

    public:
        Camera(glm::vec3 cameraPos,glm::vec3 cameraTarget,glm::vec3 up );

        void moveCamera(glm::vec3 translation);
    };

}