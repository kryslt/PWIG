// ************************************************************************
// This file implements library exports for the callee.
// -------
// WARNING
// -------
// This file was generated by PWIG. Do not edit.
// File generated on 08.02.2024 12:22:07

#ifndef TESTLIB_CALLEE_H
#define TESTLIB_CALLEE_H

// Library properties:
// Name: TestLib
// Version: 1.0
// GUID: F3C093C0-035B-4C33-BB28-C1FDE270D3B5
// Description: Test library

#include <string>
#include "stdafx.h"
#include "stdint.h"
#include "testlib_intf.h"

#define LIB_EXPORT extern "C" __declspec(dllexport)

// Forward declarations:
class ProjectGroup;
class Project;
class AuxIProjectGroupEvents;

// Copy these class declarations into testlib_callee_impl.h to allow custom members to be added.
// Note: testlib_callee_impl.h is not maintained by PWIG and must be implemented by library author!
/*
// Name: ProjectGroup
// GUID: 7C12BB43-A6AB-4A52-8B1D-EDD5D94B344B
// Description: ProjectGroup Object

class ProjectGroup : public BaseTestLib
{
  private:
    AuxIProjectGroupEvents * m_Events;
  public:
    ProjectGroup();
    ~ProjectGroup();
    // Methods:
    IProject AddProject();
    void RunPeriodic();
    void Finalize();
    // Properties:
    // Setup event handlers:
    void SetupOnError(IProjectGroupEvents EventSink, TIProjectGroupEventsOnError EventHandler);
    void SetupOnProgress(IProjectGroupEvents EventSink, TIProjectGroupEventsOnProgress EventHandler);
};

// Name: Project
// GUID: D96EA22B-D750-4C05-9F32-8C5C8E9F846D
// Description: Project Object

class Project : public BaseTestLib
{
  private:
  public:
    Project();
    ~Project();
    // Methods:
    void Connect();
    void Disconnect();
    TBool LoadFromFile(std::wstring Path);
    TBool SaveToFile(std::wstring Path);
    // Properties:
    int32_t GetConnectionFRC();
    std::wstring GetConnectionString();
};

// End of declarations to be copied to testlib_callee_impl.h file.
*/

// Name: IProjectGroupEvents
// GUID: 08199EC9-1D26-442A-BE88-7B953C71EC7E
// Description: Events interface for ProjectGroup Object

// Wrapper class for IProjectGroupEvents interface event sinks:

class AuxIProjectGroupEvents : public BaseTestLib
{
  private:
    IProjectGroupEvents m_OnErrorEventSink;
    TIProjectGroupEventsOnError m_OnErrorEventHandler;
    IProjectGroupEvents m_OnProgressEventSink;
    TIProjectGroupEventsOnProgress m_OnProgressEventHandler;
  public:
    AuxIProjectGroupEvents();
    // Setup event handlers:
    void SetupOnError(IProjectGroupEvents EventSink, TIProjectGroupEventsOnError EventHandler);
    void SetupOnProgress(IProjectGroupEvents EventSink, TIProjectGroupEventsOnProgress EventHandler);
    // Call event handlers:
    void OnError(TErrorCode ErrorCode, std::wstring ErrorText);
    void OnProgress(TProgressEvent EventCode, int32_t ProgressValue, std::wstring EventText);
};

// Library identification code
LIB_EXPORT char * __cdecl GetLibGUID(void);

// Name: ProjectGroup
// GUID: 7C12BB43-A6AB-4A52-8B1D-EDD5D94B344B
// Description: ProjectGroup Object

// Constructor:
LIB_EXPORT bool __cdecl ProjectGroupCreate(IProjectGroup &ItemHandle);
// Destructor:
LIB_EXPORT bool __cdecl ProjectGroupDestroy(IProjectGroup ItemHandle);
// Methods:
LIB_EXPORT bool __cdecl ProjectGroupIProjectGroupAddProject(IProjectGroup ItemHandle, IProject & Project);
LIB_EXPORT bool __cdecl ProjectGroupIProjectGroupRunPeriodic(IProjectGroup ItemHandle);
LIB_EXPORT bool __cdecl ProjectGroupIProjectGroupFinalize(IProjectGroup ItemHandle);
// Properties:
// Event handler setters:
LIB_EXPORT bool __cdecl SetProjectGroupIProjectGroupEventsOnError(IProjectGroup ItemHandle, IProjectGroupEvents EventSink, TIProjectGroupEventsOnError EventHandler);
LIB_EXPORT bool __cdecl SetProjectGroupIProjectGroupEventsOnProgress(IProjectGroup ItemHandle, IProjectGroupEvents EventSink, TIProjectGroupEventsOnProgress EventHandler);

// Name: Project
// GUID: D96EA22B-D750-4C05-9F32-8C5C8E9F846D
// Description: Project Object

// Constructor:
LIB_EXPORT bool __cdecl ProjectCreate(IProject &ItemHandle);
// Destructor:
LIB_EXPORT bool __cdecl ProjectDestroy(IProject ItemHandle);
// Methods:
LIB_EXPORT bool __cdecl ProjectIProjectConnect(IProject ItemHandle);
LIB_EXPORT bool __cdecl ProjectIProjectDisconnect(IProject ItemHandle);
LIB_EXPORT bool __cdecl ProjectIProjectLoadFromFile(IProject ItemHandle, char * Path, TBool & Result);
LIB_EXPORT bool __cdecl ProjectIProjectSaveToFile(IProject ItemHandle, char * Path, TBool & Result);
// Properties:
LIB_EXPORT bool __cdecl ProjectGetIProjectConnectionFRC(IProject ItemHandle, int32_t & Value);
LIB_EXPORT bool __cdecl ProjectGetIProjectConnectionString(IProject ItemHandle, char * Value, int32_t &Length__Value);

#endif TESTLIB_CALLEE_H

