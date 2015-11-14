#ifndef MAIN_MENU_VIEW_H
#define MAIN_MENU_VIEW_H

#include "EngineStd/UserInterface/HumanView/HumanView.h"

class MainMenuView : public HumanView
{
	URHO3D_OBJECT(MainMenuView, HumanView)
public:
	MainMenuView(Context* context, Renderer* renderer, bool intro);
	virtual ~MainMenuView();

	// Initialization.
	virtual bool VOnRestore() { return true; }
	virtual void VShutdown() { }

protected:
	// Delegates
	virtual void VInitializeAllDelegates();				// Register all delegates
	virtual void VDestroyAllDelegates();				// Unsubscribe from all events

	// Delegates
	void FinishIntroductionPartDelegate(StringHash eventType, VariantMap& eventData);

public:
	SharedPtr<IScreenElement> m_pMainMenu;
};

#endif
