#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main()
{
	#pragma region init glfw

	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	int window_w, window_h;
	window_w = 1280;
	window_h = 720;
		
	GLFWwindow* gamewindow = glfwCreateWindow(window_w, window_h, "OpenGL Tutorial", NULL, NULL);

	if (gamewindow == NULL)
	{
		std::cout << "Failed to create OpenGL window" << std::endl;
		glfwTerminate();
		return -1;
	}

	#pragma endregion

	glfwMakeContextCurrent(gamewindow);	// <- Make the game window the current context

	// window loop
	while (!glfwWindowShouldClose(gamewindow))
	{
		glfwPollEvents();
	}

	glfwDestroyWindow(gamewindow);
	glfwTerminate();
	return 0;
}