#include "pch.h"

// --- Overview ---
// This is the load function.
// It will be called when your extension is loaded into Artemis.
// Here you can do any initialization that you would need in order for your extension to work.
// A few examples of actions that would be great to do here:
// - Register ImGui windows.
// - Register keybinds.
// - Change virtual memory protections.
// - Load mission critical resources.
// - Subscribe to events.
// - Construct global objects.
// 
// --- Return Value ---
// A return value of 'true' indicates to the extension loader that the initialization of the loaded extension was successful.
// A return value of 'false' indicates to the extension loader that the initialization fo the loaded extension was a failure and that the extension cannot function properly. 
// In the case of an initialization failure, the extension loader will immediately call the release function.
// This means that even in the event of an initialization failure, your release function will still run, so make sure that the release function validates every value it interacts with
// in the event that it is cleaning up after a failed initialization.
// As an example:
// If you allocate memory as a part of your initialization procedure, make sure that those pointers can always be validated, by for example; setting them to nullptr by default.
// In the event of an initialization failure, the release function can then validate these pointers in order to properly dispose of them.
__declspec(dllexport) extern "C" bool __cdecl Load(void) noexcept {
	
	return true;
}

// --- Overview ---
// This is the release function.
// It will be called when Artemis is exiting or when this extension is released.
// Here you can do any cleanup necessary from the previous call to load.
__declspec(dllexport) extern "C" void __cdecl Release(void) noexcept {

}