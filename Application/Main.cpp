#include "Engine.h"
#include <iostream> 
/*
float points[] = {
	1.0f, 1.0f, 0.0f,
	-1.0f,  -1.0f, 0.0f,
	-1.0f, 1.0f, 0.0f,
	-1.0f, -1.0f, 0.0f,
	1.0f,  1.0f, 0.0f,
	1.0f, -1.0f, 0.0f
};
glm::vec3 colors[] = {
	{0,0,1},
	{1,0,1},
	{0,1,1},
	{0,1,0},
	{1,0,1},
	{0,0,1},
	{1,0,1},
	{0,1,1},
};
glm::vec2 texcoords[]{
	{0,0},
	{0,1},
	{1,0},
	{0,1},
	{1,1},
	{1,0}
};
*/

float vertices[] = {
	-0.5f, -0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 0.0f,
	 0.5f, -0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 0.0f,
	 0.5f,  0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 1.0f,
	 0.5f,  0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 1.0f,
	-0.5f,  0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 1.0f,
	-0.5f, -0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 0.0f,

	-0.5f, -0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 0.0f,
	 0.5f, -0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 0.0f,
	 0.5f,  0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 1.0f,
	 0.5f,  0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 1.0f,
	-0.5f,  0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 1.0f,
	-0.5f, -0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 0.0f,

	-0.5f,  0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 0.0f,
	-0.5f,  0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 1.0f,
	-0.5f, -0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 1.0f,
	-0.5f, -0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 1.0f,
	-0.5f, -0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 0.0f,
	-0.5f,  0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 0.0f,

	 0.5f,  0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 0.0f,
	 0.5f,  0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 1.0f,
	 0.5f, -0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 1.0f,
	 0.5f, -0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 1.0f,
	 0.5f, -0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 0.0f,
	 0.5f,  0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 0.0f,

	-0.5f, -0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 1.0f,
	 0.5f, -0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 1.0f,
	 0.5f, -0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 0.0f,
	 0.5f, -0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 0.0f,
	-0.5f, -0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 0.0f,
	-0.5f, -0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 1.0f,

	-0.5f,  0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 1.0f,
	 0.5f,  0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 1.0f,
	 0.5f,  0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 0.0f,
	 0.5f,  0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 1.0f, 0.0f,
	-0.5f,  0.5f,  0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 0.0f,
	-0.5f,  0.5f, -0.5f,  1.0f, 1.0f, 1.0f, 0.0f, 1.0f
};

int main(int argc, char** argv)
{
	LOG("Application Started...");

	neu::InitializeMemory();
	neu::SetFilePath("../Assets");


	neu::Engine::Instance().Initialize();
	neu::Engine::Instance().Register();

	neu::g_renderer.CreateWindow("Neumont", 800, 600);
	LOG("Window Initalized... ");
	/*
	// create vertex buffer
	GLuint pvbo = 0;
	glGenBuffers(1, &pvbo);
	glBindBuffer(GL_ARRAY_BUFFER, pvbo);
	glBufferData(GL_ARRAY_BUFFER, 18 * sizeof(float), points, GL_STATIC_DRAW);

	//Color
	GLuint cvbo = 0;
	glGenBuffers(1, &cvbo);
	glBindBuffer(GL_ARRAY_BUFFER, cvbo);
	glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(glm::vec3), colors, GL_STATIC_DRAW);
	//Texture
	GLuint tvbo = 0;
	glGenBuffers(1, &tvbo);
	glBindBuffer(GL_ARRAY_BUFFER, tvbo);
	glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(glm::vec2), texcoords, GL_STATIC_DRAW);
	*/

	GLuint vbo = 0;
	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	// create vertex array
	GLuint vao = 0;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	glBindBuffer(GL_ARRAY_BUFFER, vbo);

	glEnableVertexAttribArray(0);
	//glBindBuffer(GL_ARRAY_BUFFER, pvbo);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);

	glEnableVertexAttribArray(1);
	//glBindBuffer(GL_ARRAY_BUFFER, cvbo);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3 * sizeof(float)));

	glEnableVertexAttribArray(2);
	//glBindBuffer(GL_ARRAY_BUFFER, tvbo);
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));

	// create shader
	std::shared_ptr<neu::Shader> vs = neu::g_resources.Get<neu::Shader>("Shaders/basic.vert", GL_VERTEX_SHADER);
	std::shared_ptr<neu::Shader> fs = neu::g_resources.Get<neu::Shader>("Shaders/basic.frag", GL_FRAGMENT_SHADER);


	// create program
	std::shared_ptr<neu::Program> program = neu::g_resources.Get <neu::Program>("Shaders/basic.prog", GL_PROGRAM);
	program->Link();
	program->Use();


	//create material
	std::shared_ptr<neu::Material> material = neu::g_resources.Get<neu::Material>("Materials/box.mtrl");
	material->Bind();

	material->GetProgram()->SetUniform("tint", glm::vec3{ 1, 0, 0 });
	material->GetProgram()->SetUniform("scale", 1.0f);


	glm::mat4 model{ 1 };
	glm::mat4 projection = glm::perspective(45.0f, neu::g_renderer.GetWidth() / (float)neu::g_renderer.GetHeight(), 0.01f, 100.0f);

	glm::vec3 cameraPosition = glm::vec3{ 0, 0, 1 };
	float speed = 3;

	bool quit = false;
	while (!quit)
	{
		neu::Engine::Instance().Update();

		if (neu::g_inputSystem.GetKeyState(neu::key_escape) == neu::InputSystem::KeyState::Pressed) quit = true;


		glm::mat4 view = glm::lookAt(cameraPosition , cameraPosition + glm::vec3{0, 0, -1}, cameraPosition + glm::vec3{0, 1, 0});
		model = glm::eulerAngleXYZ(0.0f, neu::g_time.time, 0.0f);
		glm::mat4 mvp = projection * view * model;

		if (neu::g_inputSystem.GetKeyState(neu::key_a) == neu::InputSystem::KeyState::Held) cameraPosition.x -= speed * neu::g_time.deltaTime;
		if (neu::g_inputSystem.GetKeyState(neu::key_d) == neu::InputSystem::KeyState::Held) cameraPosition.x += speed * neu::g_time.deltaTime;
		if (neu::g_inputSystem.GetKeyState(neu::key_w) == neu::InputSystem::KeyState::Held) cameraPosition.y += speed * neu::g_time.deltaTime;
		if (neu::g_inputSystem.GetKeyState(neu::key_s) == neu::InputSystem::KeyState::Held) cameraPosition.y -= speed * neu::g_time.deltaTime;
		if (neu::g_inputSystem.GetKeyState(neu::key_q) == neu::InputSystem::KeyState::Held) cameraPosition.z -= speed * neu::g_time.deltaTime;
		if (neu::g_inputSystem.GetKeyState(neu::key_e) == neu::InputSystem::KeyState::Held) cameraPosition.z += speed * neu::g_time.deltaTime;


		//program->SetUniform("scale", std::sin(neu::g_time.time * 3));
		program->SetUniform("mvp", mvp);



		neu::g_renderer.BeginFrame();

		glDrawArrays(GL_TRIANGLES, 0, 36);

		neu::g_renderer.EndFrame();
	}

	neu::Engine::Instance().Shutdown();
	return 0;
}