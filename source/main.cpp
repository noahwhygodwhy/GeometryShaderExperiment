#include <iostream>
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "glm/glm.hpp"
#include "glm/gtx/string_cast.hpp"
#include "Renderer.hpp"
#include "assimp/Importer.hpp"
#include "GLFW/glfw3.h"
// #include "assimp/scene.h"
// #include "assimp/postprocess.h"

using namespace glm;
using namespace std;


int main(void) {

    printf("hello world\n");

    Assimp::Importer importer;

    printf("hello world2\n");




    vec3 x(0, 0, 0);
    cout<<to_string(x)<<endl;
    Renderer r = Renderer(800, 600);
    r.initializeOpenGL();
    r.run();

}