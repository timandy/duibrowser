/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009
*/

#include "config.h"

#include "JSXMLHttpRequestProgressEvent.h"

#include <wtf/GetPtr.h>

#include "XMLHttpRequestProgressEvent.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSXMLHttpRequestProgressEventTableValues[4] =
{
    { "position", (intptr_t)JSXMLHttpRequestProgressEvent::PositionAttrNum, DontDelete|ReadOnly, 0 },
    { "totalSize", (intptr_t)JSXMLHttpRequestProgressEvent::TotalSizeAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSXMLHttpRequestProgressEvent::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLHttpRequestProgressEventTable = { 15, JSXMLHttpRequestProgressEventTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSXMLHttpRequestProgressEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLHttpRequestProgressEventConstructorTable = { 0, JSXMLHttpRequestProgressEventConstructorTableValues, 0 };

class JSXMLHttpRequestProgressEventConstructor : public DOMObject {
public:
    JSXMLHttpRequestProgressEventConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSXMLHttpRequestProgressEventPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSXMLHttpRequestProgressEventConstructor::s_info = { "XMLHttpRequestProgressEventConstructor", 0, &JSXMLHttpRequestProgressEventConstructorTable, 0 };

bool JSXMLHttpRequestProgressEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequestProgressEventConstructor, DOMObject>(exec, &JSXMLHttpRequestProgressEventConstructorTable, this, propertyName, slot);
}

JSValue* JSXMLHttpRequestProgressEventConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSXMLHttpRequestProgressEventPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLHttpRequestProgressEventPrototypeTable = { 0, JSXMLHttpRequestProgressEventPrototypeTableValues, 0 };

const ClassInfo JSXMLHttpRequestProgressEventPrototype::s_info = { "XMLHttpRequestProgressEventPrototype", 0, &JSXMLHttpRequestProgressEventPrototypeTable, 0 };

JSObject* JSXMLHttpRequestProgressEventPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSXMLHttpRequestProgressEvent.prototype]]");
    return KJS::cacheGlobalObject<JSXMLHttpRequestProgressEventPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSXMLHttpRequestProgressEvent::s_info = { "XMLHttpRequestProgressEvent", &JSProgressEvent::s_info, &JSXMLHttpRequestProgressEventTable , 0 };

JSXMLHttpRequestProgressEvent::JSXMLHttpRequestProgressEvent(JSObject* prototype, XMLHttpRequestProgressEvent* impl)
    : JSProgressEvent(prototype, impl)
{
}

bool JSXMLHttpRequestProgressEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequestProgressEvent, Base>(exec, &JSXMLHttpRequestProgressEventTable, this, propertyName, slot);
}

JSValue* JSXMLHttpRequestProgressEvent::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case PositionAttrNum: {
        XMLHttpRequestProgressEvent* imp = static_cast<XMLHttpRequestProgressEvent*>(impl());
        return jsNumber(exec, imp->position());
    }
    case TotalSizeAttrNum: {
        XMLHttpRequestProgressEvent* imp = static_cast<XMLHttpRequestProgressEvent*>(impl());
        return jsNumber(exec, imp->totalSize());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSXMLHttpRequestProgressEvent::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[XMLHttpRequestProgressEvent.constructor]]");
    return KJS::cacheGlobalObject<JSXMLHttpRequestProgressEventConstructor>(exec, constructorIdentifier);
}


}
