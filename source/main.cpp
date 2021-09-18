#include <iostream>
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "glm/glm.hpp"
#include "glm/gtx/string_cast.hpp"
#include "Renderer.hpp"

using namespace glm;
using namespace std;


int main(void) {

    vec3 x(0, 0, 0);
    cout<<to_string(x)<<endl;
    Renderer r = Renderer(800, 600);
    r.initializeOpenGL();
    r.run();
}