//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "HAL.h"
#include "HAL_GHI_GameO_Display.h"

using namespace GHI::GameO;


HRESULT Library_HAL_GHI_GameO_Display::Initialize___STATIC__BOOLEAN__GHIGameODisplayOrientation__U2__U2( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT8 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 0, param0 ) );

        UINT16 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 1, param1 ) );

        UINT16 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 2, param2 ) );

        INT8 retVal = Display::Initialize( param0, param1, param2, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_HAL_GHI_GameO_Display::WriteRaw___STATIC__BOOLEAN__SZARRAY_U1__I4__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_TypedArray_UINT8 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ARRAY( stack, 0, param0 ) );

        INT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param1 ) );

        INT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 2, param2 ) );

        INT8 retVal = Display::WriteRaw( param0, param1, param2, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_HAL_GHI_GameO_Display::WriteRaw___STATIC__BOOLEAN__SZARRAY_U2__I4__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_TypedArray_UINT16 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16_ARRAY( stack, 0, param0 ) );

        INT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param1 ) );

        INT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 2, param2 ) );

        INT8 retVal = Display::WriteRaw( param0, param1, param2, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_HAL_GHI_GameO_Display::WriteRegister___STATIC__BOOLEAN__U2__U2( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT16 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 0, param0 ) );

        UINT16 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 1, param1 ) );

        INT8 retVal = Display::WriteRegister( param0, param1, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_HAL_GHI_GameO_Display::WriteRegister___STATIC__BOOLEAN__U2( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT16 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 0, param0 ) );

        INT8 retVal = Display::WriteRegister( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_HAL_GHI_GameO_Display::FillRect___STATIC__BOOLEAN__U2__U2__U2__U2__U2( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT16 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 0, param0 ) );

        UINT16 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 1, param1 ) );

        UINT16 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 2, param2 ) );

        UINT16 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 3, param3 ) );

        UINT16 param4;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 4, param4 ) );

        INT8 retVal = Display::FillRect( param0, param1, param2, param3, param4, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_HAL_GHI_GameO_Display::DrawImage___STATIC__BOOLEAN__SZARRAY_U1__U2__U2__U2__U2__U2__U2__U2__U2( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_TypedArray_UINT8 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ARRAY( stack, 0, param0 ) );

        UINT16 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 1, param1 ) );

        UINT16 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 2, param2 ) );

        UINT16 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 3, param3 ) );

        UINT16 param4;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 4, param4 ) );

        UINT16 param5;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 5, param5 ) );

        UINT16 param6;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 6, param6 ) );

        UINT16 param7;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 7, param7 ) );

        UINT16 param8;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 8, param8 ) );

        INT8 retVal = Display::DrawImage( param0, param1, param2, param3, param4, param5, param6, param7, param8, hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}