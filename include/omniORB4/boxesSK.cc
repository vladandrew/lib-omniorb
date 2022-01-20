// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.

#include <omniORB4/objTracker.h>

// value box StringValue

void
CORBA::StringValue_Helper::add_ref(::CORBA::StringValue* _v)
{
  if (_v) _v->_add_ref();
}

void
CORBA::StringValue_Helper::remove_ref(::CORBA::StringValue* _v)
{
  if (_v) _v->_remove_ref();
}

CORBA::StringValue*
CORBA::StringValue::_downcast(::CORBA::ValueBase* _b)
{
  return _b ? (CORBA::StringValue*)_b->_ptrToValue(_PD_repoId) : 0;
}

const char* CORBA::StringValue::_PD_repoId = "IDL:omg.org/CORBA/StringValue:1.0";

const char*
CORBA::StringValue::_NP_repositoryId() const
{
  return _PD_repoId;
}

const char*
CORBA::StringValue::_NP_repositoryId(::CORBA::ULong& hash) const
{
  hash = 2793555336U;
  return _PD_repoId;
}

const _omni_ValueIds*
CORBA::StringValue::_NP_truncatableIds() const
{
  return 0;
}

::CORBA::Boolean
CORBA::StringValue::_NP_custom() const
{
  return 0;
}

::CORBA::Boolean
CORBA::StringValue::_NP_box() const
{
  return 1;
}

void*
CORBA::StringValue::_ptrToValue(const char* _id)
{
  if (_id == ::CORBA::StringValue::_PD_repoId)
    return (::CORBA::StringValue*) this;
  
  if (_id == ::CORBA::ValueBase::_PD_repoId)
    return (::CORBA::ValueBase*) this;
  
  if (omni::strMatch(_id, ::CORBA::StringValue::_PD_repoId))
    return (::CORBA::StringValue*) this;
  
  if (omni::strMatch(_id, ::CORBA::ValueBase::_PD_repoId))
    return (::CORBA::ValueBase*) this;

  return 0;
}

void
CORBA::StringValue::_NP_marshal(CORBA::StringValue* _v, cdrStream& _0s)
{
  omniValueType::marshal(_v, CORBA::StringValue::_PD_repoId, _0s);
}

void
CORBA::StringValue_Helper::marshal(::CORBA::StringValue* _v, cdrStream& _0s)
{
  CORBA::StringValue::_NP_marshal(_v,_0s);
}

CORBA::StringValue*
CORBA::StringValue::_NP_unmarshal(cdrStream& _0s)
{
  ::CORBA::ValueBase* _b = omniValueType::unmarshal(CORBA::StringValue::_PD_repoId,
						    2793555336U, 0, _0s);
  CORBA::StringValue* _d = CORBA::StringValue::_downcast(_b);
  if (_b && !_d) {
    ::CORBA::remove_ref(_b);
    OMNIORB_THROW(BAD_PARAM, BAD_PARAM_ValueFactoryFailure,
		  (::CORBA::CompletionStatus)_0s.completion());
  }
  return _d;
}

CORBA::StringValue*
CORBA::StringValue_Helper::unmarshal(cdrStream& _0s)
{
  return CORBA::StringValue::_NP_unmarshal(_0s);
}

void
CORBA::StringValue::_PR_marshal_state(cdrStream& _0s) const
{
  _0s.marshalString(_pd_boxed,0);

}

void
CORBA::StringValue::_PR_unmarshal_state(cdrStream& _0s)
{
  _pd_boxed = _0s.unmarshalString(0);

}

#ifdef OMNI_HAVE_COVARIANT_RETURNS
CORBA::StringValue*
#else
::CORBA::ValueBase*
#endif
CORBA::StringValue::_copy_value()
{
  ::CORBA::ValueBase* _b;
  _b = _omni_ValueFactoryManager::create_for_unmarshal(_PD_repoId, 2793555336U);
  CORBA::StringValue* _v = CORBA::StringValue::_downcast(_b);
  if (!_v) {
    ::CORBA::remove_ref(_b);
    OMNIORB_THROW(BAD_PARAM, BAD_PARAM_ValueFactoryFailure,
		  ::CORBA::COMPLETED_NO);
  }
  _v->_PR_copy_state(this);
  return _v;
}

void
CORBA::StringValue::_PR_copy_state(CORBA::StringValue* _v)
{
  _pd_boxed = _CORBA_String_helper::dup(_v->_pd_boxed);
}

CORBA::StringValue::~StringValue()
{
  _CORBA_String_helper::dealloc(_pd_boxed);
}

// ValueFactory for value box
class _0RL_CORBA_StringValue_init : public ::CORBA::ValueFactoryBase
{
public:
  _0RL_CORBA_StringValue_init() {}
  virtual ~_0RL_CORBA_StringValue_init() {}

  virtual ::CORBA::ValueBase* create_for_unmarshal();
};

::CORBA::ValueBase*
_0RL_CORBA_StringValue_init::create_for_unmarshal()
{
  return new CORBA::StringValue();
}

class _0RL_CORBA_StringValue_install {
public:
  _0RL_CORBA_StringValue_install() {
    ::CORBA::ValueFactoryBase* vf = new _0RL_CORBA_StringValue_init();
    _omni_ValueFactoryManager::register_factory(CORBA::StringValue::_PD_repoId, 2793555336, vf, 1);
    vf->_remove_ref();
  }
  ~_0RL_CORBA_StringValue_install() {
    try {
      _omni_ValueFactoryManager::unregister_factory(CORBA::StringValue::_PD_repoId, 2793555336);
    }
    catch (::CORBA::BAD_PARAM&) {
    }
  }
};

static _0RL_CORBA_StringValue_install _0RL_CORBA_StringValue_install_;

// value box WStringValue

void
CORBA::WStringValue_Helper::add_ref(::CORBA::WStringValue* _v)
{
  if (_v) _v->_add_ref();
}

void
CORBA::WStringValue_Helper::remove_ref(::CORBA::WStringValue* _v)
{
  if (_v) _v->_remove_ref();
}

CORBA::WStringValue*
CORBA::WStringValue::_downcast(::CORBA::ValueBase* _b)
{
  return _b ? (CORBA::WStringValue*)_b->_ptrToValue(_PD_repoId) : 0;
}

const char* CORBA::WStringValue::_PD_repoId = "IDL:omg.org/CORBA/WStringValue:1.0";

const char*
CORBA::WStringValue::_NP_repositoryId() const
{
  return _PD_repoId;
}

const char*
CORBA::WStringValue::_NP_repositoryId(::CORBA::ULong& hash) const
{
  hash = 102723655U;
  return _PD_repoId;
}

const _omni_ValueIds*
CORBA::WStringValue::_NP_truncatableIds() const
{
  return 0;
}

::CORBA::Boolean
CORBA::WStringValue::_NP_custom() const
{
  return 0;
}

::CORBA::Boolean
CORBA::WStringValue::_NP_box() const
{
  return 1;
}

void*
CORBA::WStringValue::_ptrToValue(const char* _id)
{
  if (_id == ::CORBA::WStringValue::_PD_repoId)
    return (::CORBA::WStringValue*) this;
  
  if (_id == ::CORBA::ValueBase::_PD_repoId)
    return (::CORBA::ValueBase*) this;
  
  if (omni::strMatch(_id, ::CORBA::WStringValue::_PD_repoId))
    return (::CORBA::WStringValue*) this;
  
  if (omni::strMatch(_id, ::CORBA::ValueBase::_PD_repoId))
    return (::CORBA::ValueBase*) this;

  return 0;
}

void
CORBA::WStringValue::_NP_marshal(CORBA::WStringValue* _v, cdrStream& _0s)
{
  omniValueType::marshal(_v, CORBA::WStringValue::_PD_repoId, _0s);
}

void
CORBA::WStringValue_Helper::marshal(::CORBA::WStringValue* _v, cdrStream& _0s)
{
  CORBA::WStringValue::_NP_marshal(_v,_0s);
}

CORBA::WStringValue*
CORBA::WStringValue::_NP_unmarshal(cdrStream& _0s)
{
  ::CORBA::ValueBase* _b = omniValueType::unmarshal(CORBA::WStringValue::_PD_repoId,
						    102723655U, 0, _0s);
  CORBA::WStringValue* _d = CORBA::WStringValue::_downcast(_b);
  if (_b && !_d) {
    ::CORBA::remove_ref(_b);
    OMNIORB_THROW(BAD_PARAM, BAD_PARAM_ValueFactoryFailure,
		  (::CORBA::CompletionStatus)_0s.completion());
  }
  return _d;
}

CORBA::WStringValue*
CORBA::WStringValue_Helper::unmarshal(cdrStream& _0s)
{
  return CORBA::WStringValue::_NP_unmarshal(_0s);
}

void
CORBA::WStringValue::_PR_marshal_state(cdrStream& _0s) const
{
  _0s.marshalWString(_pd_boxed,0);

}

void
CORBA::WStringValue::_PR_unmarshal_state(cdrStream& _0s)
{
  _pd_boxed = _0s.unmarshalWString(0);

}

#ifdef OMNI_HAVE_COVARIANT_RETURNS
CORBA::WStringValue*
#else
::CORBA::ValueBase*
#endif
CORBA::WStringValue::_copy_value()
{
  ::CORBA::ValueBase* _b;
  _b = _omni_ValueFactoryManager::create_for_unmarshal(_PD_repoId, 102723655U);
  CORBA::WStringValue* _v = CORBA::WStringValue::_downcast(_b);
  if (!_v) {
    ::CORBA::remove_ref(_b);
    OMNIORB_THROW(BAD_PARAM, BAD_PARAM_ValueFactoryFailure,
		  ::CORBA::COMPLETED_NO);
  }
  _v->_PR_copy_state(this);
  return _v;
}

void
CORBA::WStringValue::_PR_copy_state(CORBA::WStringValue* _v)
{
  _pd_boxed = _CORBA_WString_helper::dup(_v->_pd_boxed);
}

CORBA::WStringValue::~WStringValue()
{
  _CORBA_WString_helper::dealloc(_pd_boxed);
}

// ValueFactory for value box
class _0RL_CORBA_WStringValue_init : public ::CORBA::ValueFactoryBase
{
public:
  _0RL_CORBA_WStringValue_init() {}
  virtual ~_0RL_CORBA_WStringValue_init() {}

  virtual ::CORBA::ValueBase* create_for_unmarshal();
};

::CORBA::ValueBase*
_0RL_CORBA_WStringValue_init::create_for_unmarshal()
{
  return new CORBA::WStringValue();
}

class _0RL_CORBA_WStringValue_install {
public:
  _0RL_CORBA_WStringValue_install() {
    ::CORBA::ValueFactoryBase* vf = new _0RL_CORBA_WStringValue_init();
    _omni_ValueFactoryManager::register_factory(CORBA::WStringValue::_PD_repoId, 102723655, vf, 1);
    vf->_remove_ref();
  }
  ~_0RL_CORBA_WStringValue_install() {
    try {
      _omni_ValueFactoryManager::unregister_factory(CORBA::WStringValue::_PD_repoId, 102723655);
    }
    catch (::CORBA::BAD_PARAM&) {
    }
  }
};

static _0RL_CORBA_WStringValue_install _0RL_CORBA_WStringValue_install_;

