#ifndef _DDS_BUILTINTOPICS_H_
#define _DDS_BUILTINTOPICS_H_

#include <dds/dds.hpp>
#include <org/opensplice/topic/DataRepresentation.hpp>
#include <org/opensplice/topic/TypeHash.hpp>

namespace DDS
{
    typedef dds::core::ByteSeq                                      octSeq;

    typedef dds::topic::BuiltinTopicKey                             BuiltinTopicKey_t;
    typedef dds::core::StringSeq                                    StringSeq;

    using org::opensplice::topic::DataRepresentationId_t;
    using org::opensplice::topic::XCDR_REPRESENTATION;
    using org::opensplice::topic::XML_REPRESENTATION;
    using org::opensplice::topic::OSPL_REPRESENTATION;
    using org::opensplice::topic::GPB_REPRESENTATION;
    using org::opensplice::topic::INVALID_REPRESENTATION;

    typedef dds::core::Duration                                     Duration_t;

    typedef dds::core::policy::UserData                             UserDataQosPolicy;
    typedef dds::core::policy::TopicData                            TopicDataQosPolicy;
    typedef dds::core::policy::GroupData                            GroupDataQosPolicy;
    typedef dds::core::policy::TransportPriority                    TransportPriorityQosPolicy;
    typedef dds::core::policy::Lifespan                             LifespanQosPolicy;
    typedef dds::core::policy::DurabilityKind                       DurabilityQosPolicyKind;
    typedef dds::core::policy::Durability                           DurabilityQosPolicy;
    typedef dds::core::policy::PresentationAccessScopeKind          PresentationQosPolicyAccessScopeKind;
    typedef dds::core::policy::Presentation                         PresentationQosPolicy;
    typedef dds::core::policy::Deadline                             DeadlineQosPolicy;
    typedef dds::core::policy::LatencyBudget                        LatencyBudgetQosPolicy;
    typedef dds::core::policy::OwnershipKind                        OwnershipQosPolicyKind;
    typedef dds::core::policy::Ownership                            OwnershipQosPolicy;
#ifdef  OMG_DDS_OWNERSHIP_SUPPORT
    typedef dds::core::policy::OwnershipStrength                    OwnershipStrengthQosPolicy;
#endif  // OMG_DDS_OWNERSHIP_SUPPORT
    typedef dds::core::policy::LivelinessKind                       LivelinessQosPolicyKind;
    typedef dds::core::policy::Liveliness                           LivelinessQosPolicy;
    typedef dds::core::policy::TimeBasedFilter                      TimeBasedFilterQosPolicy;
    typedef dds::core::policy::Partition                            PartitionQosPolicy;
    typedef dds::core::policy::ReliabilityKind                      ReliabilityQosPolicyKind;
    typedef dds::core::policy::Reliability                          ReliabilityQosPolicy;
    typedef dds::core::policy::DestinationOrderKind                 DestinationOrderQosPolicyKind;
    typedef dds::core::policy::DestinationOrder                     DestinationOrderQosPolicy;
    typedef dds::core::policy::HistoryKind                          HistoryQosPolicyKind;
    typedef dds::core::policy::History                              HistoryQosPolicy;
    typedef dds::core::policy::ResourceLimits                       ResourceLimitsQosPolicy;
#ifdef  OMG_DDS_PERSISTENCE_SUPPORT
    typedef dds::core::policy::DurabilityService                    DurabilityServiceQosPolicy;
#endif  // OMG_DDS_PERSISTENCE_SUPPORT
    typedef org::opensplice::core::policy::ProductData              ProductDataQosPolicy;
    typedef dds::core::policy::EntityFactory                        EntityFactoryQosPolicy;
    typedef org::opensplice::core::policy::Share                    ShareQosPolicy;
    typedef dds::core::policy::WriterDataLifecycle                  WriterDataLifecycleQosPolicy;
    typedef org::opensplice::core::policy::InvalidSampleVisibility  InvalidSampleVisibilityQosPolicyKind;
    typedef org::opensplice::core::policy::SubscriptionKey          SubscriptionKeyQosPolicy;
    typedef dds::core::policy::ReaderDataLifecycle                  ReaderDataLifecycleQosPolicy;
    typedef org::opensplice::core::policy::SubscriptionKey          UserKeyQosPolicy;
    typedef org::opensplice::core::policy::ReaderLifespan           ReaderLifespanQosPolicy;
    typedef org::opensplice::topic::TypeHash                        TypeHash;
    typedef dds::topic::ParticipantBuiltinTopicData                 ParticipantBuiltinTopicData;
    typedef dds::topic::TopicBuiltinTopicData                       TopicBuiltinTopicData;
    typedef org::opensplice::topic::TypeBuiltinTopicData            TypeBuiltinTopicData;
    typedef dds::topic::PublicationBuiltinTopicData                 PublicationBuiltinTopicData;
    typedef dds::topic::SubscriptionBuiltinTopicData                SubscriptionBuiltinTopicData;
    typedef org::opensplice::topic::CMParticipantBuiltinTopicData   CMParticipantBuiltinTopicData;
    typedef org::opensplice::topic::CMPublisherBuiltinTopicData     CMPublisherBuiltinTopicData;
    typedef org::opensplice::topic::CMSubscriberBuiltinTopicData    CMSubscriberBuiltinTopicData;
    typedef org::opensplice::topic::CMDataWriterBuiltinTopicData    CMDataWriterBuiltinTopicData;
    typedef org::opensplice::topic::CMDataReaderBuiltinTopicData    CMDataReaderBuiltinTopicData;
}

#endif /* _DDS_BUILTINTOPICS_H_ */
