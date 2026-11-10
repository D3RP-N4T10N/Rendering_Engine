//
// Created by Phili on 11/6/2026.
//
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Camera.h"

namespace core {
    Camera::Camera(glm::vec3 cameraPos, glm::vec3 cameraTarget, glm::vec3 cameraUp) : cameraPos(cameraPos), cameraTarget(cameraTarget), cameraUp(cameraUp)
    {
        glm::vec3 cameraDirection = glm::normalize(cameraPos - cameraTarget);
        glm::vec3 cameraRight = glm::normalize(glm::cross(up, cameraDirection));
        cameraUp = glm::cross(cameraDirection, cameraRight);
    }



}