# Cloud Computing (9FC17) — MID-1 Preparation Pack
**B.Tech IV Year I SEM | SNIST | Portion: UNIT-I, UNIT-II, UNIT-III | Max Marks: 30 | Time: 2 Hours**

---

## 1. Exam Pattern Analysis (derived from the Mid-2 paper)

The Mid-2 paper (Dec 2025) covered Units IV, V, VI. Your Mid-1 covers Units I, II, III — **same structure, shifted units**.

| Part | Format | Marks | Mapping for Mid-1 |
|---|---|---|---|
| **Part–A** (Compulsory short answers) | 6 × 2 = **12 marks** | 2 marks each | Q1, Q2 → Unit-I · Q3, Q4 → Unit-II · Q5, Q6 → Unit-III |
| **Part–B** (Answer any **THREE** of FOUR) | 3 × 6 = **18 marks** | 6 marks each | Q7 → Unit-I · Q8 → Unit-II · Q9 → Unit-III · Q10 (a+b+c, 2 marks each, one per unit) |

**Key observations about the paper:**
- Part-A is **all L1 (Remember)** — one-line/definition/list answers. Never write essays here; 2–4 lines or 2 bullet points max.
- Part-B Q7–Q9 are **L2 (Understand)** — "Describe / Explain the architecture of / key components of". These want a **definition + labelled diagram + 4–6 bullet points**.
- **Q10 is a gift question** — three unrelated 2-mark parts. If any one of Q7/Q8/Q9 goes badly, attempt Q10 instead. It is the easiest 6 marks on the paper.
- Question verbs repeat: *"What is…", "Mention any two…", "State any two…", "Give two examples…", "Describe the key components of…", "Explain the architecture of…"*.
- Every Part-B question in Mid-2 had a diagram-friendly answer. **Draw the diagram** — Unit-I virtualization/MapReduce, Unit-II cloud reference model, Unit-III deployment architecture / MVC / SOA layers.

**Strategy for tomorrow:** Part-A is compulsory so you cannot skip any unit. Unit-III is the largest and most question-dense (design considerations, SOA, CCM, MVC, REST, SQL vs NoSQL, boto) — do not leave it for last.

---

## 1B. LAST YEAR'S ACTUAL MID-1 PAPER (25.09.2025) — SOLVED

**This is the highest-value section in this document.** The paper below is the real Mid-1 for your exact portion (Units I, II, III). Questions repeat heavily between years — learn these twelve first.

### Part–A (6 × 2 = 12)

| # | Unit | Question | BCLL | Answer |
|---|---|---|---|---|
| 1 | I | Define Cloud Computing? Explain essential characteristics of cloud computing | L1 | → [Q7-A](#q7-a-explain-the-essential-characteristics-of-cloud-computing) (give the NIST definition + name all 5 characteristics in one line each) |
| 2 | I | Define Virtualization? What is the purpose of Hypervisor in Cloud Computing? | L1 | → Part-A Unit-I "What is virtualization?" and "What is a hypervisor?" |
| 3 | II | Briefly explain cloud application services | L1 | → [Q8-C](#q8-c-explain-application-services-in-the-cloud-runtime-queuing-email-notification-media) (for 2 marks: just name the 5 types + one example each) |
| 4 | II | Write short notes on OpenStack Open Source Private Cloud Software | L3 | → [Q8-D](#q8-d-explain-the-architecture-of-open-source-private-cloud-software-cloudstack--eucalyptus--openstack), OpenStack part |
| 5 | III | **What are the pros and cons of cloud data storage approaches?** | L1 | → **Q9-D2 below** |
| 6 | III | Write short notes on REST? | L1 | → [Q9-C](#q9-c-explain-the-cloud-application-design-methodologies-soa-ccm-mvc-rest), REST part |

### Part–B (answer any THREE of four, 3 × 6 = 18)

| # | Unit | Question | BCLL | Answer |
|---|---|---|---|---|
| 7 | I | Discuss in detail the Cloud Computing service and Deployment models | L2 | → [Q7-B](#q7-b-explain-the-cloud-service-models-and-deployment-models-with-examples) |
| 8 | II | **Explain in detail the computing and Storage services offered by different types of Cloud Service Providers** | L2 | → **Q8-E below** |
| 9 | III | Illustrate in detail about cloud application design methodologies | L4 | → [Q9-C](#q9-c-explain-the-cloud-application-design-methodologies-soa-ccm-mvc-rest) |
| 10a | I | **Briefly explain Map Reduce with suitable example** | L4 | → [Q7-E](#q7-e-explain-the-mapreduce-programming-model) + **worked example Q7-E2 below** |
| 10b | II | **Explain the Analytics services offered by different types of Cloud Service Providers** | L3 | → **Q8-F below** |
| 10c | III | Discuss in detail Reference Architectures for Cloud Applications | L2 | → [Q9-B](#q9-b-describe-the-reference-deployment-architecture-for-cloud-applications) |

### What this paper tells you

- **Both mid papers use identical structure**, so the Part-A/Part-B split and the "any 3 of 4 + Q10 with three parts" rule are confirmed, not guessed.
- **Part-A here is harder than the Mid-2 Part-A** — Q1 asks for a definition *and* the characteristics, Q4 is an L3 "short notes". Budget ~4 lines per Part-A answer, not 2.
- **Every single Part-B question is answerable from this document.** Q7, Q9 and Q10c map to answers already written; Q8, Q10a and Q10b are written out below.
- **Repeat-risk topics** (appeared in the real paper and are core to the syllabus): service + deployment models, virtualization/hypervisor, application services, OpenStack, REST, data storage approaches, design methodologies, MapReduce, reference architectures, compute + storage services. That list is essentially your priority revision order.
- Note the paper asks Unit-II questions in the **"across different cloud service providers"** framing twice (Q8 and Q10b). Whenever you answer a Unit-II question, structure it as **AWS → Google → Azure**. The equivalence table in the revision sheet is exactly what they want.

---

## 2. Syllabus Map (what's actually in your PDFs)

| Unit | File | Topics |
|---|---|---|
| **I (Part 1)** | CC_Unit-1.1 | What is cloud, definitions (NIST), 5 essential characteristics, service models (IaaS/PaaS/SaaS), deployment models (Public/Private/Hybrid/Community), advantages/disadvantages, multi-tenancy, cloud service examples (EC2, GCE, Azure VM, GAE, Salesforce), cloud applications (healthcare, energy, transport, mfg, govt, education, mobile) |
| **I (Part 2)** | CC_Unit-1.2 | Virtualization + hypervisors, Load balancing (6 algorithms + 4 persistence methods), Scalability & Elasticity, Deployment lifecycle, Replication (array/network/host), Monitoring, MapReduce, IDAM, SLA, Billing |
| **II** | CC_Unit-2 | Cloud services & platforms: Compute, Storage, Database, Application (runtime/queue/email/notification/media), Content Delivery, Analytics, Deployment & Mgmt, IDAM services — each across AWS/Google/Azure. Open-source private cloud: CloudStack, Eucalyptus, OpenStack |
| **III (Part 1)** | CC_Unit-3.1 | Design considerations (scalability, reliability & availability, security, maintenance, performance), Reference architectures (4 tiers), Design methodologies: SOA, CCM, MVC, REST; Data storage approaches (SQL/ACID vs NoSQL) |
| **III (Part 2)** | CC_Unit-3.2 | Python for AWS — **boto** library, handling EC2, AutoScaling, S3, RDS, DynamoDB, SQS, EMR |

---

# PART – A : Predicted 2-Mark Questions & Answers

## UNIT–I

**Q. What is cloud computing?**
Cloud computing is the delivery of computing resources (servers, storage, applications, services) over the Internet on a pay-per-use basis. As per NIST, it is *"a model for enabling ubiquitous, convenient, on-demand network access to a shared pool of configurable computing resources that can be rapidly provisioned and released with minimal management effort or service provider interaction."*

**Q. Mention any two essential characteristics of cloud computing.**
1. **On-demand self-service** – users provision computing resources themselves without human interaction with the provider.
2. **Rapid elasticity** – capabilities can be scaled out/in rapidly and automatically as per demand.
(Others: broad network access, resource pooling, measured service.)

**Q. What is measured service?**
Cloud systems automatically control and optimize resource usage using a metering capability. Usage is monitored, controlled and reported, and the customer is billed accordingly — providing transparency to both provider and consumer.

**Q. What are the three cloud service models?**
**IaaS** (Infrastructure as a Service – e.g., Amazon EC2, S3), **PaaS** (Platform as a Service – e.g., Google App Engine), **SaaS** (Software as a Service – e.g., Salesforce, Facebook).

**Q. Name the four cloud deployment models.**
Public Cloud, Private Cloud, Hybrid Cloud, Community Cloud.

**Q. What is a hybrid cloud?**
A hybrid cloud combines public and private clouds. The individual clouds retain their unique identity but are bound by standardized/proprietary technology that enables data and application portability — secure data on private, cost savings on public.

**Q. What is a community cloud?**
A cloud whose services are shared by several organizations having the same policy and compliance considerations, so that cloud costs are shared across the group.

**Q. Differentiate scaling up and scaling out.**
- **Vertical scaling (scale-up):** increase the computing capacity of the existing server (more CPU/RAM), number of servers stays constant.
- **Horizontal scaling (scale-out):** launch and provision **more** server resources of the same type.

**Q. What is multi-tenancy? Name its two forms.**
Multi-tenancy allows multiple users/tenants to share the same set of resources. Two forms:
1. **Virtual multi-tenancy** – computing/storage shared; tenants served from VMs running on the same hardware.
2. **Organic multi-tenancy** – every component of the architecture including hardware is shared among tenants.

**Q. Mention any two disadvantages of cloud computing.**
Data security and privacy risks; dependence on network connectivity/bandwidth (service unavailable if the network or power fails). Others: dependence on outside agencies, limited flexibility, long-term stability of the provider.

**Q. What is virtualization?**
Virtualization is the partitioning of the resources of a physical system into multiple virtual resources. It enables pooling of resources to serve multiple users through multi-tenancy; users are assigned virtual resources that run on top of the physical resources.

**Q. What is a hypervisor? Name its two types.**
A hypervisor is the interface/monitoring system in the virtualization layer that presents a virtual operating platform to a guest OS.
- **Type-1 (Native/Bare-metal):** runs directly on host hardware — Xen Server, KVM, VMware ESX/ESXi, Hyper-V, Oracle VM.
- **Type-2 (Hosted):** runs on top of a conventional OS — VMware Workstation, VirtualBox.

**Q. What is a guest OS?**
An operating system installed inside a virtual machine, in addition to the host (main) operating system.

**Q. Mention any two load balancing algorithms.**
**Round Robin** (servers selected one by one in circular fashion, no priority) and **Least Connections** (request routed to the server with the fewest active connections). Others: Weighted Round Robin, Low Latency, Priority, Overflow.

**Q. What is a sticky session?**
A session-persistence approach in which all requests belonging to one user session are routed to the same server. Advantage: simple session management. Drawback: if that server fails, all its sessions are lost (no automatic failover).

**Q. What is the goal of load balancing?**
To distribute workloads across multiple servers so as to achieve maximum resource utilization, minimum response time and maximum throughput, giving the application high availability and reliability.

**Q. Define RPO and RTO.**
- **RPO (Recovery Point Objective):** the maximum targeted period for which data might be lost from an IT service due to a major incident.
- **RTO (Recovery Time Objective):** the loss of service time due to an incident.

**Q. Name the three types of replication approaches.**
Array-based replication, Network-based replication, Host-based replication.

**Q. Mention any two typical cloud monitoring metrics.**
CPU – CPU-Usage / CPU-Idle; Memory – Memory-Used / Memory-Free / Page-Cache. (Also Disk: Disk-Usage, Bytes/sec, Operations/sec; Interface: Packets/sec, Octets/sec.)

**Q. What is MapReduce?**
MapReduce is a parallel data-processing model for processing and analysing massive-scale data. It has two phases — **Map** (data is partitioned across nodes and processed as key–value pairs) and **Reduce** (intermediate data with the same key is aggregated).

**Q. What is the Shuffle phase in MapReduce?**
Shuffle transfers the map output from the Mapper to the Reducer. The Sort phase merges and sorts the map outputs by key; shuffle and sort occur simultaneously and are handled by the MapReduce framework.

**Q. What is IDAM?**
Identity and Access Management describes the authentication and authorization of users to provide secure access to cloud resources. It lets organizations centrally manage users, access permissions, security credentials and access keys. Enabled by OAuth, Role-Based Access Control (RBAC), digital identities and security tokens.

**Q. What is an SLA? Mention any two SLA criteria.**
A Service Level Agreement formally defines the level of service guaranteed as part of the service contract with the cloud provider (a minimum guaranteed level and a target level). Two criteria: **Availability** (% of time the service is guaranteed available) and **Performance** (response time, throughput). Others: disaster recovery, problem resolution, security & privacy of data.

**Q. Mention any three cloud billing models.**
Elastic pricing, Fixed pricing and Spot pricing.

---

## UNIT–II

**Q. What are compute services?**
Compute services provide dynamically scalable compute capacity in the cloud, provisioned on demand in the form of virtual machines. Examples: Amazon EC2, Google Compute Engine, Windows Azure VMs.

**Q. Mention any two features of cloud compute services.**
**Scalable** (rapidly provision as many VM instances as required, vertically or horizontally) and **Secure** (security groups, access control lists, network firewalls control access to instances). Others: flexible, cost-effective.

**Q. What is an AMI?**
An Amazon Machine Image is a pre-configured template of a cloud instance (OS + applications + libraries) used to launch EC2 instances. Users can also create their own custom AMIs.

**Q. What is the role of security groups in EC2?**
Security groups act as a virtual firewall — they are used to open or block specific network ports for the launched instances.

**Q. How is data organized in cloud storage services?**
Data in cloud storage services is organized into **buckets** (AWS S3, Google Cloud Storage) or **containers** (Windows Azure blob storage).

**Q. Mention any two features of cloud storage services.**
**Replication** – an uploaded object is replicated at multiple facilities and on multiple devices in each facility; **Encryption** – server-side encryption to encrypt all stored data. Others: scalability, access policies (ACLs), strong consistency.

**Q. What is Amazon S3?**
Amazon Simple Storage Service is an online cloud-based data storage infrastructure for storing and retrieving any amount of data. It is highly reliable, scalable, fast, fully redundant and affordable; data is organized in the form of buckets.

**Q. Differentiate block blobs and page blobs (Azure).**
- **Block blob:** subdivided into blocks; if a failure occurs during transfer, retransmission resumes from the most recent block instead of resending the whole blob.
- **Page blob:** divided into pages, designed for **random access** — applications can read and write individual pages at random.

**Q. Give one example each of a relational and a non-relational cloud database service.**
Relational: Amazon RDS / Google Cloud SQL / Azure SQL Database. Non-relational (NoSQL): Amazon DynamoDB / Google Cloud Datastore / Azure Table Service.

**Q. What is Amazon DynamoDB?**
DynamoDB is Amazon's fully-managed, scalable, high-performance non-relational (NoSQL) database service. Its model consists of **tables, items and attributes** — a table is a collection of items and each item is a collection of attributes. Data is automatically replicated across multiple availability zones for durability.

**Q. What is Google App Engine?**
GAE is a PaaS offering from Google — a cloud-based web service for hosting web applications and storing data. It supports Java, Python and PHP, runs apps in a secure sandbox, and provides a NoSQL datastore, Memcache, task queues and URL-fetch/email/image services.

**Q. What is a sandbox in GAE?**
A secure, isolated environment in which App Engine applications run, isolated from other applications.

**Q. What is Memcache in App Engine?**
Memcache is a high-performance in-memory key–value cache service used for caching data items that do not need persistent storage.

**Q. What is the purpose of cloud queuing services?**
Queuing services **de-couple** application components, which then communicate via message queues. They enable asynchronous processing and act as overflow buffers for temporary volume spikes or mismatches in message generation and consumption rates. Example: Amazon SQS (max 256 KB message), Azure Queue Service (64 KB).

**Q. Name the two types of Google Task Queues.**
**Push queues** (default; process tasks at the processing rate configured in the queue definition) and **Pull queues** (consumers lease a specific number of tasks for a specific duration; tasks are processed and deleted before the lease ends).

**Q. On what model do cloud notification services work?**
The **publish–subscribe** model: consumers subscribe to topics provided by a publisher, and whenever new content is available on that topic the notification service pushes it out to the consumer. Example: Amazon SNS (publishers and subscribers; a topic is a logical access point / communication channel).

**Q. What is a CDN?**
A Content Delivery Network is a distributed system of servers located across multiple geographic locations that serves content to end users with high availability and high performance. Requests are directed to the nearest **edge location**, which caches popular static content, reducing bandwidth costs and improving response times.

**Q. What is Amazon CloudFront?**
Amazon's CDN service that delivers dynamic, static and streaming content using a global network of edge locations. Content is organized into **distributions**, each specifying an origin (S3 bucket, EC2 instance, Elastic Load Balancer or your own origin server).

**Q. Mention two tasks that can be performed using cloud analytics services.**
Data mining and log-file analysis. (Also machine learning and web indexing.) Example services: Amazon Elastic MapReduce, Google BigQuery, Azure HDInsight.

**Q. Name any two job types supported by Amazon Elastic MapReduce.**
**Custom JAR** (runs a Java program uploaded to Amazon S3) and **Streaming job** (a single Hadoop job with map/reduce written in Ruby, Perl, Python, PHP, R, bash or C++). Others: Hive program, Pig program, HBase.

**Q. What is Google BigQuery?**
A Google service for querying massive datasets using SQL-like queries against append-only tables, using the processing power of Google's infrastructure. Data is loaded in CSV or JSON format via the BigQuery console, command-line tool or API.

**Q. What is AWS Elastic Beanstalk?**
A deployment service from Amazon that lets you quickly deploy and manage applications in the AWS cloud — you upload the application and specify configuration settings in a wizard, and the service automatically handles instance provisioning, server configuration, load balancing and monitoring. Supports Java, PHP, .NET, Node.js, Python and Ruby.

**Q. What is a stack in Amazon CloudFormation?**
A collection of AWS resources (EC2, EBS, SNS, Elastic Load Balancing, Auto Scaling, etc.) that you want to manage together. Stacks are created from CloudFormation **templates** (predefined or your own).

**Q. Name any three open-source private cloud software.**
Apache CloudStack, Eucalyptus and OpenStack.

**Q. Name any two OpenStack components and their functions.**
**Nova-compute** – manages networks of virtual machines and provides virtual servers on demand; **Keystone** – identity service providing authentication and authorization for other services. (Others: Cinder–volumes, Swift–object storage, Glance–image registry, Horizon–dashboard, RabbitMQ–messaging, nova-scheduler.)

**Q. What is Walrus in Eucalyptus?**
Walrus is the Eucalyptus component equivalent to Amazon S3 — it serves as persistent storage for all the virtual machines in the Eucalyptus cloud.

**Q. What is fog computing?**
Fog computing is a decentralized computing infrastructure in which data, compute, storage and applications are located somewhere **between the data source and the cloud** rather than entirely in the cloud.

---

## UNIT–III

**Q. Mention any two design considerations for cloud applications.**
**Scalability** and **Reliability & Availability**. (Others: security, maintenance & upgradation, performance.)

**Q. What are the four design considerations that support scalability?**
1. Loose coupling of components, 2. Asynchronous communication, 3. Stateless design, 4. Database choice and design.

**Q. Why is loose coupling important in cloud applications?**
Tight coupling binds resources to specific purposes and functions and limits scalability. With loosely coupled components each component can be **scaled, deployed, tested and upgraded independently** of the others, which also lowers maintenance and upgradation cost.

**Q. What is stateless design?**
A design in which components store their state **outside** the component, in a separate database. This allows application components to be scaled and distributed horizontally, since successive requests may be serviced by different servers.

**Q. Define reliability and availability.**
- **Reliability:** the probability that a system will perform the intended functions under stated conditions for a specified amount of time.
- **Availability:** the probability that a system will perform a specified function under given conditions at a prescribed time.

**Q. What is graceful degradation?**
Designing an application so that if some component becomes unavailable, the application as a whole is still available and continues to serve users — though with limited functionality (e.g., e-commerce applications).

**Q. Mention any two key security considerations for cloud applications.**
Securing data at rest and securing data in motion. (Others: authentication, authorization, IDAM, key management, data integrity, auditing.)

**Q. Name the four tiers of a cloud reference/deployment architecture.**
Load-balancing tier, Application tier, Database tier and Storage tier.

**Q. Why should at least two load balancer instances be provisioned?**
To avoid a **single point of failure**; and wherever possible they should be provisioned in separate availability zones to further improve reliability and availability.

**Q. How are read and write requests handled in the database tier?**
The **master** database instance serves all **write** requests and the **slave** instances serve the **read** requests. This improves throughput since most applications have more reads than writes, and the slaves also act as a backup — on master failure a slave can be automatically promoted to master.

**Q. What is SOA?**
Service Oriented Architecture is a well-established architectural approach for designing applications as a collection of discrete, loosely coupled, reusable **services** that communicate with each other by passing messages, are described using **WSDL** and communicate using **SOAP**.

**Q. What is WSDL?**
Web Services Description Language — an XML-based language used to describe the functionality offered by a web service. Its concepts are: Services, Endpoint, Binding, Interface, Operation and Types.

**Q. What is SOAP?**
Simple Object Access Protocol — a protocol that allows the exchange of structured information between web services. WSDL in combination with SOAP is used to provide web services over the Internet.

**Q. Name the layers of SOA.**
Business systems, Service components, Composite services, Orchestrated business processes, Presentation services, and the Enterprise Service Bus (which integrates the services through adapters, routing, transformation and messaging).

**Q. What is CCM?**
The Cloud Component Model is an application design methodology that provides a flexible way of creating cloud applications in a rapid, convenient and **platform-independent** manner — it is not tied to any programming language or cloud platform, giving better portability, interoperability and scalability.

**Q. Name the three design steps in CCM.**
Component design, Architecture design and Deployment design.

**Q. Mention the three characteristics of CCM components.**
Loose coupling (via the REST communication protocol), Asynchronous (message-based) communication, and Stateless design.

**Q. What are the three parts of MVC?**
**Model** (manages data and behaviour, processes events from the controller, knows nothing about views/controllers), **View** (prepares the interface shown to the user), **Controller** (glues model to view — processes user requests, updates the model when the user manipulates the view and updates the view when the model changes).

**Q. Mention any two benefits of MVC.**
It improves the maintainability of the application and allows reuse of code; and since the Model does not depend on View/Controller, the model can be developed and tested independently.

**Q. What is REST?**
Representational State Transfer is a set of architectural principles by which web services and web APIs can be designed, focusing on a system's **resources** and how resource states are addressed and transferred.

**Q. Name any two REST constraints.**
**Client–Server** (separation of concerns — client and server can be developed independently) and **Stateless** (each request contains all information needed; session state is kept entirely on the client). Others: cacheable, layered system, uniform interface, code on demand (optional).

**Q. Which REST constraint is optional?**
**Code on demand** — servers can provide executable code or scripts for clients to execute in their context.

**Q. What is a RESTful web service?**
A web API implemented using HTTP and REST principles. It is a collection of **resources represented by URIs**; clients send requests to these URIs using the methods defined by the HTTP protocol, and it can support various Internet media types.

**Q. Expand ACID and name the properties.**
Atomicity (all-or-nothing transaction), Consistency (database moves from one valid state to another, conforming to schema/constraints), Isolation (concurrent transactions give the same result as serial execution; incomplete transactions are invisible to others), Durability (committed data survives system outages).

**Q. Mention any two relational database constraints.**
**Entity integrity constraint** (no primary key value can be null) and **Referential integrity constraint** (every value of an attribute of one relation must exist as a value of another attribute in another relation). Others: domain constraint, foreign key.

**Q. What is a foreign key?**
A key in one relation that matches the primary key of another relation; used for cross-referencing between multiple relations.

**Q. Mention any two differences between SQL and NoSQL databases.**
1. Relational databases have a **fixed strict schema** and provide **ACID** guarantees; non-relational databases have **no strict schema** and do **not** provide ACID guarantees.
2. NoSQL databases have better **horizontal scaling**, fault tolerance and performance for big data, at the cost of less rigorous consistency models.

**Q. Name the four general categories of NoSQL records.**
Key-value store, Document store (JSON/XML/BSON/YAML), Graph store, Object store.

**Q. What is boto?**
Boto is a **Python package that provides an interface to Amazon Web Services (AWS)** — it supports compute, storage, database, deployment, IDAM, application, monitoring, networking and billing services.

**Q. Mention any two AWS services that can be accessed using boto.**
Amazon EC2 and Amazon S3. (Others: EMR, AutoScaling, CloudFront, RDS, DynamoDB, SQS, SES, SNS, CloudWatch, Route53, VPC, Glacier, EBS, Elastic Beanstalk, CloudFormation, IAM.)

**Q. Which boto function is used to connect to an EC2 region?**
`boto.ec2.connect_to_region()` — passing the EC2 region, AWS access key and AWS secret access key.

**Q. Which boto functions are used to launch and stop EC2 instances?**
`conn.run_instances()` launches new instances (passing AMI-ID, instance type, EC2 key handle and security groups) and returns a reservation; `conn.stop_instances()` stops running instances and `conn.start_instances()` starts stopped instances.

**Q. What is Amazon AutoScaling?**
A service that automatically scales Amazon EC2 capacity up or down — increasing the number of instances during spikes in application workload to meet performance requirements and scaling down when the workload is low to save costs.

**Q. Which Python package is used to connect to a MySQL RDS instance?**
**MySQLdb** — `MySQLdb.connect()` is called with the endpoint hostname, database username, password and port number; `conn.cursor()` gets the cursor and `cursor.execute()` runs SQL commands.

**Q. Name any two boto functions used with Amazon SQS.**
`conn.create_queue()` to create a new queue and `queue.write()` / `queue.read()` to write and read messages. (`conn.get_all_queues()` lists existing queues.)

---

# PART – B : 6-Mark Questions with Detailed Answers

## Q7 (Unit-I) — Likely questions

### Q7-A. Explain the essential characteristics of cloud computing.
Cloud computing, as defined by NIST, is a model for enabling ubiquitous, convenient, on-demand network access to a shared pool of configurable computing resources that can be rapidly provisioned and released with minimal management effort.

**Five essential characteristics:**

1. **On-demand self-service** – A consumer can unilaterally provision computing capabilities such as server time and network storage automatically, without requiring human interaction with the service provider.
2. **Broad network access** – Capabilities are available over the network and accessed through standard mechanisms that promote use by heterogeneous thin or thick client platforms (mobile phones, laptops, PDAs) as well as other traditional or cloud-based software services.
3. **Resource pooling** – The provider's computing resources are pooled to serve multiple consumers using a **multi-tenant model**, with different physical and virtual resources dynamically assigned and reassigned according to consumer demand.
4. **Rapid elasticity** – Capabilities are rapidly and elastically provisioned; resources can be scaled up or down based on demand, via **horizontal scaling (scale-out)** — launching and provisioning more server resources — or **vertical scaling (scale-up)** — changing the computing capacity assigned to existing servers while keeping their number constant.
5. **Measured service** – Cloud systems automatically control and optimize resource usage by leveraging a metering capability at some level of abstraction. Usage is monitored, controlled and reported, providing transparency for both provider and consumer, and the customer is billed accordingly.

**Additional characteristics:** improved **performance** (resources scale with dynamic workloads), **reduced costs** (only as much resource as required is provisioned, avoiding upfront investment for worst-case requirements), **outsourced management** (IT infrastructure outsourced to the provider, reducing management cost), **reliability** (professionally managed infrastructure, guaranteed through SLAs; most providers promise ~99.99% uptime), and **multi-tenancy** (virtual and organic forms).

---

### Q7-B. Explain the cloud service models and deployment models with examples.

**A. Cloud Service Models (NIST — three basic models)**

| Model | Description | Example |
|---|---|---|
| **IaaS** – Infrastructure as a Service | The most basic level of service. Provides access to fundamental resources such as physical machines, virtual machines and virtual storage. | Amazon EC2, Amazon S3, Google Compute Engine, Azure VMs |
| **PaaS** – Platform as a Service | Provides the runtime environment for applications along with development and deployment tools and APIs. | Google App Engine, Azure Web Sites |
| **SaaS** – Software as a Service | Allows software applications to be used as a service by end users over the Internet (multi-tenant). | Salesforce (CRM), Facebook, Twitter, webmail |

*(Diagram: three stacked layers — IaaS at the bottom, PaaS in the middle, SaaS on top.)*

**B. Cloud Deployment Models (NIST — four models)**

1. **Public Cloud** – Services are available to the general public or a large group of companies; cloud resources are shared among different users and the services are provided by a third-party cloud provider. Suits users who want to develop and test applications and host large workloads without upfront investment in IT infrastructure.
2. **Private Cloud** – The cloud infrastructure is operated for the exclusive use of a single organization; it can be set up on-premise or off-premise and may be managed internally or by a third party. Best suited to applications where security is very important and organizations that want tight control over their data.
3. **Hybrid Cloud** – Combines the features of both public and private clouds. The individual clouds retain their unique identities but are bound by standardized or proprietary technology that enables data and application portability. Best suited to organizations that want secure application and data hosting on a private cloud along with cost savings by hosting other applications on a public cloud.
4. **Community Cloud** – The cloud services are shared by several organizations that have the same policy and compliance considerations. Best suited to organizations that want access to the same applications and data and want the cloud costs shared across the group.

---

### Q7-C. Explain virtualization, hypervisors and the approaches to virtualization.

**Virtualization** refers to partitioning the resources of a physical system into multiple virtual resources. It enables pooling of resources so that multiple users can be served through multi-tenancy in cloud computing; users are assigned virtual resources that run on top of the physical resources.

*(Diagram: Hardware → Hypervisor / virtualization layer → Guest OS 1 | Guest OS 2 | Guest OS 3 → Applications.)*

**Hypervisor:** the interface or monitoring system in the virtualization layer that presents a virtual operating platform to a guest operating system.

| | Type-1 (Native / Bare-metal) | Type-2 (Hosted) |
|---|---|---|
| Runs on | Directly on the host hardware | On top of a conventional operating system |
| Controls | The hardware, and monitors the guest OS | Monitors the guest OS only |
| Examples | Citrix Xen Server, Oracle VM, KVM, VMware ESX/ESXi, Hyper-V | VMware Workstation, VirtualBox |

**Guest OS:** an operating system installed in a virtual machine in addition to the host/main OS.

**Forms of virtualization:**
1. **Full virtualization** – The virtualization layer completely decouples the guest OS from the underlying hardware. The guest OS requires **no modification** and is not aware that it is being virtualized. It is enabled by direct execution of user requests and **binary translation** of OS requests.
2. **Para-virtualization** – The guest operating system **is modified** to enable communication with the hypervisor, improving performance and efficiency. The guest OS kernel replaces non-virtualizable instructions with **hypercalls** that communicate directly with the hypervisor.
3. **Hardware-assisted virtualization** – Enabled by hardware features such as Intel's **VT-x** and AMD's **AMD-V**; privileged and sensitive calls are set to automatically trap to the hypervisor.

---

### Q7-D. Explain load balancing in cloud computing along with its algorithms.

**Load balancing** distributes workloads across multiple servers to meet application workloads and to achieve scalability, one of the important features of cloud computing. Its main goals are **maximum utilization of resources, minimum response time and maximum throughput**; with load balancing, cloud-based applications achieve high availability and reliability. The routing of user requests is determined by a load-balancing algorithm.

**Load balancing algorithms:**
1. **Round Robin** – servers are selected one by one to serve incoming requests in a non-hierarchical circular fashion, with no priority assigned to any specific server.
2. **Weighted Round Robin** – servers are assigned weights; incoming requests are proportionally routed using a static or dynamic ratio of the respective weights.
3. **Low Latency** – the load balancer monitors the latency of each server and routes each incoming request to the server with the lowest latency.
4. **Least Connections** – incoming requests are routed to the server with the least number of connections.
5. **Priority** – each server is assigned a priority; traffic is routed to the highest-priority server as long as it is available, and to a lower-priority server when it fails.
6. **Overflow** – similar to priority load balancing; when requests to the highest-priority server overflow, the excess requests are routed to a lower-priority server.

**Session persistence approaches** (important for session-based applications, where maintaining session state matters):
- **Sticky session** – all requests of a user session go to the same server; simple, but sessions are lost if that server fails since no automatic failover is possible.
- **Session database** – session information stored externally in a separate database, often replicated to avoid a single point of failure; allows automatic failover.
- **Browser cookies** – session information stored on the client side; easy session management and least overhead for the load balancer.
- **URL re-writing** – a URL re-writing engine stores session information by modifying URLs on the client side; drawback is the limited amount of session information that can be stored.

**Implementation:** *Software-based* — Nginx, HAProxy, Pound, Varnish. *Hardware-based*, implemented in ASICs — Cisco Catalyst 6500, Coyote Point Equalizer, F5 Networks BIG-IP LTM, Barracuda Load Balancer.

---

### Q7-E. Explain the MapReduce programming model.

**MapReduce** is a parallel data-processing model for the processing and analysis of massive-scale data. The input to and output of both the map and reduce functions is in the form of **key–value pairs**.

**Phases:**
1. **Map phase** – Data is read from a distributed file system, partitioned among a set of computing nodes in the cluster and sent to the nodes as a set of key–value pairs. The map function processes them and the **intermediate results are stored on the local disk** of the node running the map task.
2. **Shuffle and Sort** – Shuffle transfers the map output from the Mapper to the Reducer; Sort covers the merging and sorting of map outputs. Data from the mappers is grouped by key, split among reducers and sorted by key, so that every reducer obtains all the values associated with the same key. Shuffle and sort occur simultaneously and are done by the MapReduce framework.
3. **Reduce phase** – The intermediate data with the same key is aggregated to produce the final output.

*(Diagram: Input → Split → Map → Shuffle & Sort → Reduce → Output.)*

**Key advantages:**
- The MapReduce runtime system takes care of tasks such as partitioning the data, scheduling of jobs and communication between nodes in the cluster. This makes it easy for programmers to analyse massive-scale data without worrying about data partitioning and scheduling.
- MapReduce takes advantage of **locality of data**. In traditional approaches, data is moved to the compute nodes, resulting in significant data transmission between nodes; MapReduce instead **moves the computation to where the data resides**, reducing data transmission and improving efficiency.

**Cloud implementations:** Amazon Elastic MapReduce (EMR), Google App Engine MapReduce, Windows Azure HDInsight — all based on Hadoop.

---

### Q7-E2. MapReduce — the worked example (word count)
*(The real paper asked "Briefly explain Map Reduce **with suitable example**" — an answer without a worked example loses marks. Learn this one.)*

**Problem:** count how many times each word occurs across a huge collection of documents.

**Input file (split across nodes):**
```
Line 1:  the cloud is elastic
Line 2:  the cloud is scalable
```

**Step 1 — Splitting:** The input is partitioned among the nodes of the cluster.
`Split 1 = "the cloud is elastic"` · `Split 2 = "the cloud is scalable"`

**Step 2 — Map phase:** Each mapper reads its split and emits a key–value pair `<word, 1>` for every word. Intermediate output is written to the local disk of that node.

| Mapper 1 output | Mapper 2 output |
|---|---|
| `<the,1> <cloud,1> <is,1> <elastic,1>` | `<the,1> <cloud,1> <is,1> <scalable,1>` |

**Step 3 — Shuffle and Sort:** The framework groups all values by key, splits them among the reducers and sorts by key, so every reducer receives all the values for a given key.
`<cloud,[1,1]>` · `<elastic,[1]>` · `<is,[1,1]>` · `<scalable,[1]>` · `<the,[1,1]>`

**Step 4 — Reduce phase:** Each reducer aggregates (sums) the list of values for its key.

**Final output:**
```
cloud     2
elastic   1
is        2
scalable  1
the       2
```

**Pseudocode:**
```
map(key, value):                    reduce(key, values):
   for each word w in value:            sum = 0
       emit(w, 1)                       for each v in values:
                                            sum = sum + v
                                        emit(key, sum)
```

**Why this suits the cloud:** the mappers run in **parallel** on the nodes where the data already resides — the computation is moved to the data instead of moving terabytes of data to the compute nodes, which reduces network transmission and improves efficiency. The runtime handles partitioning, scheduling and inter-node communication automatically. Other classic examples: log-file analysis (count hits per URL), web indexing, and finding the maximum temperature per year from weather records.

---

### Q7-F. Explain replication approaches in cloud computing.

**Replication** is a method of creating and maintaining multiple copies of data in the cloud. It is important for practical reasons such as **business continuity and disaster recovery**. Cloud-based replication provides replication of data in multiple locations, automated recovery, and a low **RPO** (the maximum targeted period in which data might be lost due to a major incident) and low **RTO** (the loss of service time due to an incident).

1. **Array-based replication** – Uses compatible storage arrays to automatically copy data from a local storage array to a remote storage array. Arrays replicate data at the **sub-system level**, so the type of host accessing the data and the type of data are not important; it therefore works in heterogeneous environments with different operating systems. It uses NAS (Network Attached Storage) or SAN (Storage Area Networks). **Drawback:** it requires similar arrays at the local and remote locations.
2. **Network-based replication** – Uses an **appliance** that sits on the network and intercepts packets sent between hosts and storage arrays, replicating the intercepted packets to a secondary location. **Advantage:** supports heterogeneous environments and requires a single point of management. **Drawback:** higher initial costs due to the replication hardware and software.
3. **Host-based replication** – Runs on standard servers and uses **software** to transfer data from the local to the remote location; the hosts act as the replication mechanism. An agent installed on each host communicates with agents on other hosts. The choice between host-based and storage-based replication depends on the platform being replicated and the business requirements; if the business demands **no impact to operations** in the event of a site disaster, host-based replication provides the only feasible solution.

---

## Q8 (Unit-II) — Likely questions

### Q8-A. Explain the various cloud services offered by cloud service providers.
*(This is the "spine" answer of Unit-II — use it if the question is generic.)*

Cloud providers offer services across the IaaS/PaaS/SaaS reference model. IaaS provides virtualized, dynamically scalable resources; PaaS simplifies application development by providing development tools and APIs; SaaS provides multi-tenant applications hosted in the cloud.

1. **Compute services** – Dynamically scalable compute capacity provisioned on demand as virtual machines. Features: *scalable* (vertical scale-up and horizontal scale-out), *flexible* (many instance types, operating systems, zones/regions), *secure* (security groups, ACLs, network firewalls), *cost-effective* (on-demand, reserved and spot billing). **Examples:** Amazon EC2, Google Compute Engine, Windows Azure VMs.
2. **Storage services** – Store and retrieve any amount of data over the web; data organized into **buckets/containers**. Features: scalability, replication across facilities and devices, access policies (ACLs), server-side encryption, strong consistency. **Examples:** Amazon S3, Google Cloud Storage, Windows Azure Storage (blob/table/queue).
3. **Database services** – Set up and operate relational or non-relational databases in the cloud, relieving developers of time-consuming database administration. Features: provisioned capacity that can be scaled, read-replicas for heavy workloads, reliability (automated backups and snapshots), guaranteed performance (provisioned IOPS), security (network firewalls, authentication). **Examples:** Amazon RDS & DynamoDB, Google Cloud SQL & Datastore, Azure SQL Database & Table Service.
4. **Application services** – Application runtimes and frameworks (GAE, Azure Web Sites), **queuing** (Amazon SQS, Google Task Queue, Azure Queue), **email** (Amazon SES, Google Email Service), **notification** (Amazon SNS, Google Cloud Messaging, Azure Notification Hubs) and **media** services (Amazon Elastic Transcoder, Google Image Manipulation, Azure Media Services).
5. **Content delivery services** – CDNs with globally distributed edge locations that cache static and streaming content near users. **Examples:** Amazon CloudFront, Windows Azure CDN.
6. **Analytics services** – Analyse massive datasets stored in cloud storage or cloud databases using programming models such as MapReduce, for data mining, log-file analysis, machine learning and web indexing. **Examples:** Amazon Elastic MapReduce, Google BigQuery, Azure HDInsight.
7. **Deployment and management services** – Automatically handle deployment tasks such as capacity provisioning, load balancing, auto-scaling and application health monitoring. **Examples:** AWS Elastic Beanstalk, Amazon CloudFormation.
8. **Identity and access management services** – Manage authentication and authorization of users, user identifiers, permissions, security credentials and access keys. **Examples:** AWS IAM, Windows Azure Active Directory.

---

### Q8-B. Explain cloud storage services and cloud database services with examples.

**Cloud storage services** allow storage and retrieval of any amount of data from anywhere on the web; data is organized into **buckets** or **containers**.

*Features:* **Scalability** (objects up to several terabytes can be uploaded and multiple buckets/containers created), **Replication** (an uploaded object is replicated at multiple facilities and on multiple devices within each facility), **Access policies** (ACLs and bucket/container-level policies for security), **Encryption** (server-side encryption of all stored data), **Consistency** (strong data consistency for all upload and delete operations).

- **Amazon S3** – online cloud-based storage for any amount of data; highly reliable, scalable, fast, fully redundant and affordable. Data is organized in **buckets** (a bucket must be created before storing data); while uploading a file, redundancy, encryption options and access permissions can be specified.
- **Google Cloud Storage** – objects are organized into buckets; **ACLs** control access to objects and buckets and can be configured to share with the entire world, a Google group, a Google-hosted domain or specific Google account holders.
- **Windows Azure Storage** – provides **blob**, **table** and **queue** services. The blob storage service stores unstructured binary data (binary large objects), organized into containers. **Block blobs** are subdivided into blocks — if a failure occurs during transfer, retransmission resumes from the most recent block rather than resending the whole blob. **Page blobs** are divided into pages and are designed for random access — applications can read and write individual pages at random.

**Cloud database services** allow you to set up and operate relational or non-relational databases in the cloud; the benefit is that they relieve application developers from time-consuming database administration tasks.

*Features:* provisioned capacity can be scaled up or down, read-replicas can be created for heavy workloads, **reliability** (automated backup and snapshot options), **performance** (guaranteed provisioned IOPS), **security** (network firewalls and authentication mechanisms restrict access to instances and stored data).

- **Amazon RDS** – a web service that makes it easy to set up, operate and scale a relational database (MySQL, Oracle, SQL Server) in the cloud. A launch wizard takes the database type, instance size, allocated storage, DB instance identifier, username and password; after creation it provides an **endpoint** for secure connection.
- **Amazon DynamoDB** – Amazon's fully managed non-relational service; model of **tables → items → attributes**. You create tables and specify the required read/write throughput capacity; the service automatically spreads stored tables across servers to meet throughput, and all data is replicated across multiple availability zones for durability.
- **Google Cloud SQL** – relational database hosting MySQL in Google's cloud; supports import/export, scheduled daily backups and restore; created by selecting a region, database tier, billing plan and replication mode. **Google Cloud Datastore** – fully managed non-relational database offering ACID transactions and high availability of reads and writes; consists of **entities** with one or more properties (key–value pairs), an entity **kind** for categorization in queries and an entity **key** that uniquely identifies it.
- **Windows Azure SQL Database** – relational service based on SQL Server; it is a **multi-tenant** service that provides a logical SQL database server per customer rather than a separate SQL Server instance. **Windows Azure Table Service** – a non-relational (NoSQL) service consisting of tables with multiple entities; tables are divided into partitions, each of which can be stored on a separate machine, and each entity can contain as many as **255 properties**.

---

### Q8-C. Explain application services in the cloud (runtime, queuing, email, notification, media).

1. **Application runtimes and frameworks** – Allow developers to develop and host applications in the cloud; the runtime provides support for programming languages and automatically allocates resources without the need to run and maintain servers.
   - **Google App Engine (PaaS):** runtimes for Java, Python and PHP; a secure **sandbox** isolating applications from each other; the **webapp2** Python web framework; a **NoSQL Datastore**; authentication via Google accounts; **URL Fetch** service (access Internet resources), **Email** service, **Image Manipulation** service (resize, crop, rotate, flip, enhance), **Memcache** (high-performance in-memory key–value cache), **Task Queues** (background work broken into discrete tasks) and a **Cron** service for scheduled tasks.
   - **Windows Azure Web Sites (PaaS):** hosts web applications in the Azure cloud; in the *shared* option the VMs may contain multiple websites created by multiple users, while in the *standard* option the VMs belong to an individual user. Supports ASP.NET, PHP, Node.js and Python.
2. **Queuing services** – De-couple application components which then communicate via messaging queues; useful for asynchronous processing and act as **overflow buffers** for temporary volume spikes or mismatches in message generation and consumption rates.
   - **Amazon SQS:** a distributed queue supporting messages of up to **256 KB**, with multiple writers and readers, locking messages while they are processed. To ensure high availability it trades off strict FIFO ordering — applications needing FIFO place additional sequencing information in each message so they can be reordered after retrieval.
   - **Google Task Queue** (part of GAE): a *task* is a unit of work consisting of an application-specific URL with a request handler and an optional data payload. Two configurations — **push queues** (default; process tasks at the rate configured in the queue definition) and **pull queues** (consumers lease a specific number of tasks for a specific duration; tasks are processed and deleted before the lease ends).
   - **Windows Azure Queue Service:** stores large numbers of messages that can be accessed from anywhere via authenticated HTTP/HTTPS calls; maximum message size **64 KB**.
3. **Email services** – Allow applications hosted in the cloud to send emails. **Amazon SES** is a bulk and transactional, outbound-only email-sending service used from the SES console, an SMTP interface or the SES API; it uses content-filtering technologies to scan outgoing messages so they do not contain material flagged as questionable by ISPs. **Google Email Service** (part of GAE) lets applications send email on behalf of the app administrator and of users with Google accounts, and also receive email in the form of HTTP requests posted to the app.
4. **Notification services** – Push messaging services that allow applications to push messages to Internet-connected smart devices, based on the **publish–subscribe** model: consumers subscribe to topics and, whenever new content is available on a topic, the service pushes it to them.
   - **Amazon SNS:** has publishers and subscribers; publishers communicate asynchronously with subscribers by sending messages to **topics** (a logical access point or communication channel). SNS can deliver notifications as SMS, email, to SQS queues or to any HTTP endpoint.
   - **Google Cloud Messaging (GCM):** push messaging for Android devices; allows applications to send data from application servers to users' devices and receive messages from devices on the same connection; provides a *send-to-sync* capability.
   - **Windows Azure Notification Hubs:** a common interface for sending notifications to all major mobile platforms (Windows Store/Windows Phone 8, iOS and Android) using platform-specific **Platform Notification Systems (PNS)**; devices register their PNS handles with the hub and each hub holds credentials for each supported PNS.
5. **Media services** – **Amazon Elastic Transcoder** converts video files from their source format into other formats playable on desktops, mobiles and tablets, performing multiple transcodes in parallel using transcoding pipelines and using S3 for input/output. **Google Image Manipulation Service** (part of GAE) can resize, crop, rotate, flip and enhance images, accepting data from App Engine apps, Blobstore or Google Cloud Storage. **Windows Azure Media Services** provides encoding and format conversion, content protection, and on-demand and live streaming, letting applications build complete media workflows.

---

### Q8-D. Explain the architecture of open-source private cloud software (CloudStack / Eucalyptus / OpenStack).

**1. Apache CloudStack** – Open-source cloud software used for creating private cloud offerings. It manages the network, storage and compute nodes that make up a cloud infrastructure. An installation consists of a **Management Server** (used to configure and manage cloud resources) plus the cloud infrastructure it manages, which can be as simple as one host running a hypervisor or a large cluster of hundreds of hosts.
Hierarchy: **Region** (a specific geographical location) → **Zone** (typically a single datacenter) → **Pod** (a rack of hardware comprising a switch and one or more clusters) → **Cluster** (one or more hosts plus primary storage) → **Host** (a compute node that runs guest virtual machines).
- The *primary storage* of a cluster stores the disk volumes for all VMs running on the hosts in that cluster.
- Each zone has a *secondary storage* that stores templates, ISO images and disk-volume snapshots.

**2. Eucalyptus** – Open-source private cloud software for building private and hybrid clouds that are **compatible with AWS APIs**.
- **Node level:** the *Node Controller (NC)* hosts the virtual machine instances and manages the virtual network endpoints.
- **Cluster level:** the *Cluster Controller (CC)* manages the virtual machines and is the front end for a cluster; the *Storage Controller (SC)* manages block volumes and snapshots for instances within its cluster (similar to AWS **EBS**); the *VMware Broker* is an optional component providing an AWS-compatible interface for VMware environments.
- **Cloud level:** the *Cloud Controller (CLC)* provides an administrative interface for management and performs high-level resource scheduling, system accounting, authentication and quota management; *Walrus* is equivalent to **Amazon S3** and serves as persistent storage for all the virtual machines in the Eucalyptus cloud.

**3. OpenStack** – A cloud operating system comprising interactive services that control large pools of compute, storage and networking resources throughout a datacenter, all managed and provisioned through APIs with common authentication mechanisms.

| Component | Function |
|---|---|
| **Nova-compute** | Manages networks of VMs running on nodes; provides virtual servers on demand |
| **Nova-network** | Provides connectivity between the interfaces of other OpenStack services |
| **Cinder** (volume service) | Manages storage volumes for virtual machines |
| **Swift** (object storage) | Allows users to store and retrieve files |
| **Keystone** (identity) | Provides authentication and authorization for other services |
| **Glance** (image registry) | Acts as a catalog and repository for virtual machine images |
| **Nova-scheduler** | Maps nova-API calls to the appropriate components; takes VM requests from the queue and determines where they should run |
| **RabbitMQ** (messaging) | Acts as a central node for message passing between daemons |
| **Nova-API** | Accepts and responds to end-user compute API calls; performs orchestration such as running an instance |
| **Horizon** (dashboard) | Provides a web-based interface for managing OpenStack services |

---

### Q8-E. Explain in detail the computing and storage services offered by different Cloud Service Providers.
*(This was Part-B Q8 in the real 2025 Mid-1 paper. Answer it provider-by-provider.)*

**A. COMPUTE SERVICES**

Compute services provide dynamically scalable compute capacity in the cloud; compute resources are provisioned on demand in the form of **virtual machines**.

*Advantages of virtual machines:* isolation of applications (if one VM crashes it does not affect the others), multiple operating systems running simultaneously on one machine, and high availability through clustering (if the application on one VM goes down, the one on another VM keeps running seamlessly).

*Features:*
- **Scalable** – rapidly provision as many VM instances as required, by **vertical scale-up** (adding more compute or memory to increase the maximum capacity of the server, with no noticeable change to applications) or **horizontal scale-out** (adding more individual servers to the resource pool where the applications run).
- **Flexible** – a wide range of options for VMs: multiple instance types, operating systems and zones/regions. Staff can work in and out of the workplace with no restriction on device or location.
- **Secure** – security features that control access to instances, such as security groups, access control lists and network firewalls.
- **Cost-effective** – providers offer various billing options: on-demand, reserved and spot instances.

| Provider | Service | How it works |
|---|---|---|
| **Amazon** | **Elastic Compute Cloud (EC2)** | Click *Launch Instance* to create instances. You specify the instance type and number of instances based on the selected **AMI** (Amazon Machine Image) and the availability zones. At launch you select an existing **key pair** or create a new one for a secure connection. **Security groups** open or block specific network ports. You connect to the instance over SSH using the public DNS. Provides auto-scaling and elastic load balancing for scalable, reliable applications. |
| **Google** | **Compute Engine (GCE)** | Lets users create and manage compute instances. To create one you select an instance machine type, zone, machine image, instance name, tags and metadata. Depending on the instance type it creates two disk resources — **scratch disk** space and **persistent disk** space. By default, traffic between instances in the same network (any port, any protocol) and incoming SSH connections from anywhere are enabled. Offers types from small instances to high-memory machine types. |
| **Microsoft** | **Windows Azure Virtual Machines** | To create a new instance you select the instance type and machine image. You either provide a username and password or upload a certificate file to connect securely. Any changes made to the VM are **persistently stored**, and new VMs can be created from previously stored machine images. |

**B. STORAGE SERVICES**

Cloud storage services allow storage and retrieval of any amount of data, from anywhere on the web. Data is organized into **buckets** or **containers**.

*Features:*
- **Scalability** – high capacity; objects up to several terabytes can be uploaded and multiple buckets/containers created.
- **Replication** – when an object is uploaded it is replicated at multiple facilities and on multiple devices within each facility.
- **Access policies** – Access Control Lists and bucket/container-level policies provide security.
- **Encryption** – server-side encryption options encrypt all data stored in the cloud.
- **Consistency** – strong data consistency for all upload and delete operations.

| Provider | Service | How it works |
|---|---|---|
| **Amazon** | **Simple Storage Service (S3)** | Online storage infrastructure for storing and retrieving any amount of data — highly reliable, scalable, fast, fully redundant and affordable. Data is organized into **buckets**; a bucket must be created before data can be stored. Any kind of file can be uploaded, and while uploading you specify the redundancy and encryption options and the access permissions. |
| **Google** | **Google Cloud Storage (GCS)** | Objects are organized into **buckets**. **ACLs** control access to objects and buckets and can be configured to share them with the entire world, a Google group, a Google-hosted domain, or specific Google account holders. |
| **Microsoft** | **Windows Azure Storage** | Provides three services — **blob** storage, **table** service and **queue** service. The blob storage service stores unstructured binary data (binary large objects), organized into **containers**. Two kinds of blobs: **block blobs**, subdivided into blocks so that if a failure occurs during transfer retransmission resumes from the most recent block rather than resending the whole blob; and **page blobs**, divided into pages and designed for **random access**, so applications can read and write individual pages at random. |

**Summary table (memorise this):**

| | AWS | Google | Azure |
|---|---|---|---|
| Compute | EC2 | Compute Engine | Azure VMs |
| Storage | S3 | Cloud Storage | Azure Storage (blob/table/queue) |
| Unit of storage | Bucket | Bucket | Container |

---

### Q8-F. Explain the Analytics services offered by different Cloud Service Providers.
*(This was Part-B Q10(b) in the real 2025 Mid-1 paper.)*

**Analytics services** allow analysing massive datasets stored in the cloud — either in cloud storage or in a cloud database — using programming models such as **MapReduce**. Using cloud analytics services, applications can perform data-intensive tasks such as **data mining, log-file analysis, machine learning and web indexing**.

**1. Amazon Elastic MapReduce (EMR)**
The MapReduce service from Amazon, based on the **Hadoop** framework running on Amazon EC2 and Amazon S3. It supports five job types:
- **Custom JAR** – runs a Java program that you have uploaded to Amazon S3.
- **Hive program** – Hive is a data warehouse system for Hadoop; you process data using the SQL-like language **Hive-QL**. An EMR Hive job flow can be an interactive Hive job or a Hive script.
- **Streaming job** – runs a single Hadoop job consisting of map and reduce functions implemented in a script or binary uploaded to S3. Scripts can be written in **Ruby, Perl, Python, PHP, R, bash or C++**.
- **Pig program** – Apache Pig is a platform for analysing large datasets, consisting of the high-level language **Pig Latin** plus infrastructure for evaluating these programs. An EMR Pig job flow can be an interactive Pig job or a Pig script.
- **HBase** – a distributed, scalable NoSQL database built on top of Hadoop. EMR can launch an HBase cluster, used for referencing data for Hadoop analytics, real-time log ingestion and batch log analytics.

**2. Google MapReduce Service**
Part of the App Engine platform. App Engine MapReduce is **optimized for the App Engine environment** and provides capabilities such as **automatic sharding** for faster execution, standard data input readers for iterating over blob and datastore data, and standard output writers. It is accessed using the Google MapReduce API. To execute a job, a **MapReduce pipeline object** is instantiated within the App Engine application; the pipeline specifies the mapper, the reducer, the data input reader and the output writer.

**3. Google BigQuery**
A service for **querying massive datasets**. BigQuery allows querying datasets using **SQL-like queries** run against **append-only tables**, using the processing power of Google's infrastructure to speed up the queries. To query data it is first loaded into BigQuery using the BigQuery console, the command-line tool or the API; data can be in **CSV or JSON** format, and the uploaded data is then queried using BigQuery's dialect.

**4. Windows Azure HDInsight**
The analytics service from Microsoft. HDInsight **deploys and provisions Hadoop clusters** in the Azure cloud, making **Hadoop available as a service**. It uses **Windows Azure Blob Storage** as the default file system and provides interactive consoles for both **JavaScript and Hive**.

**Summary:** Amazon EMR, Google App Engine MapReduce and Azure HDInsight are all **Hadoop-based MapReduce** services, while Google BigQuery is a **SQL-like query service** for massive datasets rather than a MapReduce engine.

---

## Q9 (Unit-III) — Likely questions

### Q9-A. Describe the design considerations for cloud applications.

**1. Scalability** – An important factor driving application designers to the cloud, since building applications that serve millions of users without a performance hit is challenging. Traditional approaches were based on either over-provisioning of resources to handle expected peak workloads, or provisioning based on average workload levels. With cloud computing, designers can provision adequate resources to meet actual workload levels. Achieved through four design decisions:
- **Loose coupling of components** – traditional methodologies with tightly coupled components limit scalability, since tight coupling binds resources to specific purposes and functions. With loosely coupled components, each component can be scaled independently.
- **Asynchronous communication** – in traditional designs it is common practice to process a request and return immediately, which limits scalability. With asynchronous communication, capacity can be added by adding servers as the load increases.
- **Stateless design** – storing state outside of the components in a separate database allows the application components to be scaled independently.
- **Database choice and design** – the choice of database and the design of data storage schemes affect scalability; the decision between a traditional relational database with a strict schema and a schema-less database should be made after careful analysis of the application's data storage and analysis requirements.

**2. Reliability and Availability** – *Reliability* is the probability that a system will perform the intended functions under stated conditions for a specified amount of time; *Availability* is the probability that a system will perform a specified function under given conditions at a prescribed time. Implemented through:
- **No single point of failure** – traditional designs with a single database server or a single application server risk a complete breakdown on failure of that critical resource; a redundant or automated fallback resource is essential.
- **Trigger automated actions on failure** – traditional designs handled failures by raising exceptions; using failures as triggers for automated actions improves reliability and availability.
- **Graceful degradation** – if some component becomes unavailable, the application as a whole remains available and continues to serve users, though with limited functionality (e.g., e-commerce applications).
- **Logging** – logging all events in all components helps detect bottlenecks and failures so that design/development changes can improve reliability and availability.
- **Replication** – creating and maintaining multiple copies of data in the cloud so that in the event of data loss at the primary location the organization can continue operating from secondary data sources.

**3. Security** – An important consideration given the outsourced nature of cloud environments. Key considerations: securing data at rest, securing data in motion, authentication, authorization, identity and access management, key management, data integrity and auditing.

**4. Maintenance and Upgradation** – To achieve rapid time-to-market, businesses launch with a core set of features and add new features incrementally, adapting to user feedback; applications must therefore be designed with low maintenance and upgradation costs. Loosely coupled components allow changes to one component without affecting others and allow components to be tested individually; logging and triggering automated actions also lower maintenance cost.

**5. Performance** – Applications should be designed keeping performance requirements in mind, which depend on the type of application; e.g., applications with high database read-intensive workloads benefit from read-replication or caching approaches. Metrics used to evaluate performance include **response time** and **throughput**.

---

### Q9-B. Describe the reference (deployment) architecture for cloud applications.

Choosing the right deployment architecture is important to ensure that the application meets the specified performance requirements. Deployment architectures are used to build applications such as e-commerce, business-to-business, banking and financial applications. The standard architecture has **four tiers**:

*(Diagram: Users → Load Balancers → Application servers (auto-scaling group) → Master DB + Slave DBs → Disk volumes / S3 snapshots.)*

**1. Load Balancing Tier** – Consists of one or more load balancers. It is recommended to have at least **two** load balancer instances to avoid a single point of failure, and wherever possible to provision them in **separate availability zones** of the cloud service provider to improve reliability and availability.

**2. Application Tier** – The second layer, containing one or more application servers. **Auto-scaling** should be configured; it can be triggered when recorded values for metrics such as CPU usage or memory usage go above defined thresholds, and the minimum and maximum size of the auto-scaling group can be configured. It is recommended to have at least **two** application servers running at all times to avoid a single point of failure. Note that when a new instance is created by an auto-scaling event it may take a few minutes to become fully operational; if the workload increases rapidly in that period the existing servers may fail to serve all requests.

**3. Database Tier** – The third tier, including a **master** database instance and multiple **slave** instances. The master node serves all the **write** requests while the **read** requests are served from the slave nodes. This improves throughput for the database tier, since most applications have a higher number of reads than writes. The multiple slave nodes also serve as a backup for the master; in case of master failure one of the slaves can be automatically configured to become the master.

**4. Storage Tier** – For both master and slave nodes it is highly recommended to use a separate **disk subsystem** for storage rather than instance-attached storage, because in the event of instance failure all data on instance-attached storage would be lost, whereas with separate disk volumes the database can be restored. Regular **snapshots** of the database are recommended (daily or hourly), and snapshots should be stored in distributed persistent cloud storage solutions such as **Amazon S3**.

**Cloud deployment tools:** Java – Apache Tomcat, Oracle WebLogic, GlassFish, IBM WebSphere, JBoss, ColdFusion, Apache Geronimo, Orion; PHP – Zend Server, Quercus; .NET – IIS web server, Windows Server, AppFabric; Python – Django, Gunicorn, mod_python, mod_wsgi, Paste, Tornado, Zope.

---

### Q9-C. Explain the cloud application design methodologies (SOA, CCM, MVC, REST).

**1. Service Oriented Architecture (SOA)**
A well-established architectural approach for designing and developing applications in the form of **services that can be shared and reused**. SOA is a collection of discrete software modules or services that form part of an application and collectively provide its functionality. Services are developed as **loosely coupled** modules with no hard-wired calls embedded in them, and communicate with each other by passing messages.
- Services are described using **WSDL**, an XML-based web services description language. Its concepts are: **Services** (a discrete system function exposed as a web service), **Endpoint** (the address of the web service), **Binding** (specifies the interface and transport protocol), **Interface** (defines the web service, the operations it performs and the inputs/outputs), **Operation** (defines how the message is decoded and what actions can be performed) and **Types** (describe the data).
- Services communicate using **SOAP** (Simple Object Access Protocol), which allows exchange of structured information between web services. WSDL in combination with SOAP is used to provide web services over the Internet. SOA allows reuse of services across multiple applications.
- **Layers of SOA:** *Business systems* (custom-built applications and legacy systems such as ERP, CRM, SCM) → *Service components* (allow the layers above to interact with the business systems and realize the functionality of the exposed services) → *Composite services* (coarse-grained services composed of two or more service components, used to create enterprise-scale or business-unit-specific components) → *Orchestrated business processes* (compositions and orchestrations of composite services to create higher-level business processes) → *Presentation services* (topmost layer, the user interfaces that expose the services and business processes to users). The **Enterprise Service Bus** integrates the services through adapters, routing, transformation and messaging mechanisms.

**2. Cloud Component Model (CCM)**
An application design methodology that provides a flexible way of creating cloud applications in a rapid, convenient and **platform-independent** manner. It is an architectural approach not tied to any specific programming language or cloud platform. Benefits: better **portability and interoperability**; better **scalability** by decoupling components and providing an asynchronous communication mechanism; individual components can be **upgraded independently** of other components; and cost benefits, by scaling up or scaling out only those components that need additional computing capacity.
- **Design steps:** (a) **Component design** — the CCM is created based on a comprehensive analysis of the application's functions and building blocks, which are classified by the function performed and the type of cloud resources required; (b) **Architecture design** — the interactions between application components are defined; (c) **Deployment design** — components are mapped to specific cloud resources such as web servers and database servers. Since components are loosely coupled and communicate asynchronously they can be deployed independently, even on multiple clouds, making it easy to migrate components between clouds and to meet changing performance and cost requirements.
- **Characteristics of CCM components:** *Loose coupling* — instead of hard-wiring links, components interface through clearly defined functional and service boundaries, relying on the **REST** communication protocol so that components written in different programming languages can communicate; *Asynchronous communication* — loosely coupled components communicate through message-based communication, isolating all components so that each treats the others as a black box; *Stateless design* — session state is stored outside the component, enabling distribution and horizontal scaling since successive requests may be serviced by different servers.

**3. Model View Controller (MVC)**
A popular software design pattern for web applications, consisting of three parts:
- **Model** – manages the data and the behaviour of the application, processes events sent by the controller, has no information about the views and controllers, and responds to requests for information about its state (for the view) and to instructions to change state (from the controller).
- **View** – prepares the interface which is shown to the user; users interact with the application through views.
- **Controller** – glues the model to the view; it processes user requests and updates the model when the user manipulates the view, and updates the view when the model changes.
*Benefits:* improves the maintainability of the application and allows reuse of code; easy to update due to the separation of the model from the view; the model does not depend on view and controller, so it can be developed and tested independently.

**4. REST (Representational State Transfer)**
A set of architectural principles by which web services and web APIs can be designed, focusing on a system's **resources** and how resource states are addressed and transferred. The constraints apply to components, connectors and data elements within a distributed hypermedia system.
1. **Client–Server** – the principle is separation of concerns: clients should not be concerned with the storage of data (a server concern) and servers should not be concerned with the user interface (a client concern). This separation allows client and server to be developed independently.
2. **Stateless** – each request from client to server must contain all the information necessary to understand the request and cannot take advantage of stored context on the server; the session state is kept entirely on the client.
3. **Cacheable** – data within a response must be implicitly or explicitly labelled as cacheable or non-cacheable. If a response is cacheable, the client cache may reuse that data for later equivalent requests. Caching can partially or completely eliminate some interactions and improve efficiency and scalability.
4. **Layered System** – each component cannot see beyond the immediate layer with which it is interacting; e.g., a client cannot tell whether it is connected directly to the end server or to an intermediary. Scalability improves because intermediaries can respond to requests instead of the end server, without the client doing anything different.
5. **Uniform Interface** – the method of communication between client and server must be uniform. Resources are identified in the requests and are separate from the representations returned to the client; when a client holds a representation of a resource it has all the information needed to update or delete that resource.
6. **Code on demand (optional)** – servers can provide executable code or scripts for clients to execute in their context. This is the only optional constraint.

A **RESTful web service** is a web API implemented using HTTP and REST principles: a collection of resources represented by **URIs**, to which clients send requests using the methods defined by the HTTP protocol; it can support various Internet media types.

---

### Q9-D. Explain the data storage approaches for cloud applications (SQL vs NoSQL).

There are two main categories of database approaches: **Relational (SQL)** and **Non-Relational (NoSQL)**.

**1. Relational (SQL) approach**
A relational database is a database that conforms to the relational model — a collection of **relations (tables)**. A relation is a set of **tuples (rows)**; each relation has a fixed **schema** that defines the set of attributes (columns) and the constraints on them; each tuple in a relation has the same attributes; tuples can be in any order; each attribute has a **domain**, the set of possible values for that attribute; and every relation has a **primary key** that uniquely identifies each tuple. Relations can be modified using insert, update and delete operations.

*Database constraints:*
- **Domain constraint** – restricts the domain of each attribute; in each tuple the value of an attribute must come from the domain of that attribute.
- **Entity integrity constraint** – no primary key value can be null, since a null primary key would make it impossible to uniquely identify tuples.
- **Referential integrity constraint** – required to maintain consistency among tuples in two relations; every value of one attribute of a relation must exist as a value of another attribute in another relation.
- **Foreign key** – a key in a relation that matches the primary key of another relation, used for cross-referencing between multiple relations.

*ACID properties (for reliable transactions):*
- **Atomicity** – each transaction is "all or nothing"; either all parts of the transaction complete or the database state is left unchanged.
- **Consistency** – each transaction brings the database from one valid state to another; data always conforms to the defined schema and constraints.
- **Isolation** – the state obtained after a set of concurrent transactions is the same as it would have been had the transactions executed serially; the results of incomplete transactions are not visible to other transactions, which stay isolated until they finish.
- **Durability** – once a transaction is committed the data remains as it is and is not affected by system outages such as power loss; the database can track changes and recover from abnormal terminations.

**2. Non-relational (NoSQL) approach**
Non-relational databases are becoming popular with the growth of cloud computing. They have better **horizontal scaling** capability and improved performance for big data, at the cost of less rigorous consistency models, and they do **not** provide ACID guarantees. The driving force is the need for databases that can achieve high scalability, fault tolerance and availability. They can be distributed over large clusters of machines; fault tolerance is provided by storing **multiple replicas** of data on different machines; and they are optimized for fast retrieval and appending operations on records. They do not have a strict schema, and are popular for applications where the scale of data is massive, the data may be unstructured, and real-time performance is more important than consistency.

*General categories of records:*
- **Key-value store** – suited to applications that need to store unstructured data without a fixed schema; most key-value stores support native programming-language data types.
- **Document store** – stores semi-structured data as documents encoded in standards such as JSON, XML, BSON or YAML.
- **Graph store** – designed for data that has a graph structure; suitable for applications such as social networks and transportation systems.
- **Object store** – designed for storing data in the form of objects defined in object-oriented programming languages.

---

### Q9-D2. What are the pros and cons of cloud data storage approaches?
*(This was Part-A Q5 in the real 2025 Mid-1 paper — asked for 2 marks, but know the full table in case it is expanded.)*

**Two-mark version:** Relational (SQL) databases give a strict schema and **ACID** guarantees (reliable, consistent transactions) but scale poorly horizontally. Non-relational (NoSQL) databases give **high horizontal scalability, fault tolerance and performance for big data** and need no fixed schema, but provide **no ACID guarantees** and weaker consistency.

**Full comparison:**

| | **Relational (SQL)** | **Non-Relational (NoSQL)** |
|---|---|---|
| **Pros** | • Strict, well-defined **schema** keeps data consistent<br>• Full **ACID** guarantees — Atomicity, Consistency, Isolation, Durability<br>• Constraints (domain, entity integrity, referential integrity, foreign keys) enforce data correctness<br>• Mature, standard query language; good for complex queries and relationships | • Better **horizontal scaling** — distributable over large clusters of machines<br>• Improved **performance for big data**<br>• **Fault tolerance** by storing multiple replicas of data on different machines<br>• High **availability**<br>• **No strict schema** — handles unstructured data<br>• Optimized for fast retrieval and appending operations |
| **Cons** | • Poor horizontal scaling for massive data<br>• The rigid schema makes it hard to store unstructured or evolving data<br>• Lower performance at big-data scale | • **No ACID guarantees**<br>• **Less rigorous consistency models** — consistency is traded for scale<br>• Most cloud NoSQL offerings are **proprietary** solutions (vendor lock-in)<br>• Not suited to complex relational queries |
| **Best used when** | Data is structured, relationships matter, and correctness of transactions is critical (banking, financial applications) | The scale of data is massive, the data may be unstructured, and **real-time performance matters more than consistency** (social networks, logs, IoT) |

**NoSQL categories** (mention if space allows): key-value store, document store (JSON/XML/BSON/YAML), graph store, object store.

**Closing line for the answer:** *The choice of database and the design of the data storage scheme directly affect application scalability, so the decision between a strict-schema relational database and a schema-less database must be made after careful analysis of the application's data storage and analysis requirements.*

---

### Q9-E. Explain how Python (boto) is used to work with Amazon Web Services.

**Boto** is a Python package that provides an interface to Amazon Web Services. The AWS services supported by boto include compute (EC2, EMR, AutoScaling), content delivery (CloudFront), database (RDS, DynamoDB, SimpleDB, ElastiCache, RedShift), deployment and management (Elastic Beanstalk, CloudFormation, Data Pipeline), identity and access (IAM), application services (CloudSearch, Simple Workflow Service, SQS, SES, SNS), monitoring (CloudWatch), networking (Route53, VPC, Elastic Load Balancing), payments and billing (Flexible Payment Service) and storage (S3, Glacier, EBS).

**1. Amazon EC2** – an IaaS service delivering scalable, pay-as-you-go compute capacity by launching virtual machines.
- Connect: `boto.ec2.connect_to_region()`, passing the EC2 region, AWS access key and AWS secret access key.
- Launch: `conn.run_instances()`, passing the AMI-ID, instance type, EC2 key handle and security groups; it returns a **reservation**, and the instances are obtained using `reservation.instances`.
- Status of an instance: `instance.update()`. Information on all running instances: `conn.get_all_instances()` (returns reservations).
- Control: `conn.stop_instances()` stops running instances and `conn.start_instances()` starts stopped instances.

**2. Amazon AutoScaling** – automatically scales EC2 capacity up during spikes in application workload (to meet performance requirements) and down when the workload is low (to save costs).
- Connect: `boto.ec2.autoscale.connect_to_region()`.
- `conn.create_launch_configuration()` — the launch configuration contains instructions on how to launch new instances, including AMI-ID, instance type and security groups.
- `conn.create_auto_scaling_group()` — settings include the maximum and minimum number of instances in the group, the launch configuration, availability zones and an optional load balancer.
- After creating the group, the policies for scaling up and scaling down are defined, and **Amazon CloudWatch alarms** are created to trigger these policies.
- To delete: terminate all instances in the group with `group.shutdown_instances()`, then call `group_to_delete.delete()`.

**3. Amazon S3** – online data storage infrastructure for storing and retrieving any amount of data; highly reliable, scalable, fast, fully redundant and affordable.
- Connect: `boto.connect_s3()`, passing the AWS access key and secret key.
- Upload: `upload_to_s3_bucket_path()` uploads a file to a specified path in a bucket, and `upload_to_s3_bucket_root()` uploads a file to the bucket root.

**4. Amazon RDS** – a web service that allows creating instances of MySQL, Oracle or Microsoft SQL Server in the cloud, so developers can easily set up, operate and scale a relational database.
- Connect: `boto.rds.connect_to_region()`; launch with `conn.create_dbinstance()`, whose input parameters are the instance ID, database size, instance type, database username, password, port, engine, database name and security groups. When the instance status becomes *available*, details such as the instance ID, create time and instance endpoint are printed. `conn.get_all_dbinstances()` returns all database instances.
- To use the database from Python, the **MySQLdb** package is used: `MySQLdb.connect()` (endpoint hostname, database username, password and port number), `conn.cursor()` to get the database cursor and `cursor.execute()` to execute SQL commands.

**5. Amazon DynamoDB** – a fully managed, scalable, high-performance NoSQL database service.
- `boto.dynamodb.connect_to_region()` (region and keys) → `conn.create_schema()` (hash key and range key names and types) → `conn.create_table()` (table schema, read units and write units) → `conn.get_table()` to retrieve an existing table → `table.new_item()` to create an item → `item.put()` to commit the item → `table.get_item()` to read data.

**6. Amazon SQS** – a highly scalable and reliable hosted queue for storing messages as they travel between distinct components of applications.
- `boto.sqs.connect_to_region()` (region, access key, secret key) → `conn.create_queue()` (queue name) → `conn.get_all_queues()` to list existing queues → `queue.write()` to write a message → `queue.read()` to read a message.

**7. Amazon EMR** – a web service utilizing the Hadoop framework running on Amazon EC2 and S3, suitable for massive-scale data processing such as data mining, data warehousing and scientific simulations.
- `boto.emr.connect_to_region()` → create a **job flow step**; there are two types of steps, **streaming** and **custom JAR**. For a streaming job, an object of the `StreamingStep` class is created specifying the job name, the location of the mapper and reducer, and the input and output.
- The job flow is started using `conn.run_jobflow()`, passing the streaming step object as a parameter. After the MapReduce job completes, the output is obtained from the output location in the S3 bucket specified while creating the streaming step.

---

## Q10 — The "easy 6 marks" (three 2-mark parts, one per unit)

Practise these fast one-liners — they are drawn straight from the Part-A bank above.

| Likely part | Unit | Answer in one line |
|---|---|---|
| Give two examples of cloud services used in everyday life | I | Webmail (Gmail), online file storage, social networking sites, online business applications |
| Mention any two advantages of cloud computing | I | Cost saving (pay for what you use) and increased storage / better mobility / easy installation and maintenance |
| What is elasticity? | I | The ability to rapidly and elastically provision and release resources so capacity scales out and in automatically with demand |
| Name two type-1 hypervisors | I | VMware ESXi and Microsoft Hyper-V (also Xen Server, KVM, Oracle VM) |
| Give two examples of IaaS offerings | II | Amazon EC2 and Google Compute Engine (also Azure VMs, Amazon S3) |
| Mention two Amazon application services | II | Amazon SQS (queuing) and Amazon SNS (notification) — also SES, Elastic Transcoder |
| State the maximum message size in Amazon SQS and Azure Queue | II | Amazon SQS – 256 KB; Windows Azure Queue Service – 64 KB |
| What is an edge location? | II | A geographically distributed CDN server that caches content close to end users, cutting bandwidth cost and response time |
| State any two REST constraints | III | Client–server and stateless (also cacheable, layered system, uniform interface, code on demand) |
| Mention two NoSQL database categories | III | Key-value store and document store (also graph store, object store) |
| What is the role of the Controller in MVC? | III | It glues the model to the view — processes user requests, updates the model on user action and updates the view when the model changes |
| Name the Python package used to access AWS | III | **boto** |

---

## 3. Last-Minute Revision Sheet

**Numbers and names worth memorising**
- 5 essential characteristics · 3 service models · 4 deployment models
- 6 load balancing algorithms: Round Robin, Weighted RR, Low Latency, Least Connections, Priority, Overflow
- 4 session persistence methods: Sticky session, Session database, Browser cookies, URL re-writing
- 3 replication types: Array-based, Network-based, Host-based
- 3 virtualization forms: Full, Para, Hardware-assisted · 2 hypervisor types
- 3 deployment lifecycle phases: Deployment design → Performance evaluation → Deployment refinement
- 4 tiers: Load balancing → Application → Database → Storage
- 3 CCM steps: Component → Architecture → Deployment design
- 6 REST constraints (code-on-demand is optional) · 4 ACID properties · 4 NoSQL categories
- 6 WSDL concepts: Services, Endpoint, Binding, Interface, Operation, Types
- SQS 256 KB · Azure Queue 64 KB · Azure Table 255 properties · SLA uptime ~99.99%

**The AWS / Google / Azure equivalence table (very high-yield)**

| Service | AWS | Google | Azure |
|---|---|---|---|
| Compute | EC2 | Compute Engine | Azure VMs |
| Storage | S3 | Cloud Storage | Azure Storage (blob) |
| Relational DB | RDS | Cloud SQL | Azure SQL Database |
| NoSQL DB | DynamoDB | Cloud Datastore | Azure Table Service |
| PaaS runtime | Elastic Beanstalk | App Engine | Azure Web Sites |
| Queue | SQS | Task Queue | Azure Queue Service |
| Notification | SNS | Cloud Messaging (GCM) | Notification Hubs |
| Email | SES | Google Email Service | — |
| Media | Elastic Transcoder | Image Manipulation Service | Azure Media Services |
| CDN | CloudFront | — | Azure CDN |
| Analytics | Elastic MapReduce | App Engine MapReduce / BigQuery | HDInsight |
| IDAM | AWS IAM | — | Azure Active Directory |

**Definitions people lose marks on**
- *Reliability* = probability of correct function **over a period of time**; *Availability* = probability of correct function **at a prescribed time**.
- *Scalability* = the capability of being changed in size; *Elasticity* = the ability to do it **rapidly and automatically**.
- *RPO* = the data-loss window; *RTO* = the service-downtime window.
- *Scale-up* = bigger server; *Scale-out* = more servers.
- *Type-1 hypervisor* = runs on hardware; *Type-2* = runs on an OS.
- *Full virtualization* = guest OS unmodified; *Para-virtualization* = guest OS modified (hypercalls).
- *Walrus* ≈ Amazon S3; *Eucalyptus SC* ≈ Amazon EBS.

**Revision priority order (based on the real 2025 Mid-1 paper)**
1. Service models + deployment models *(was Part-B Q7)*
2. Cloud application design methodologies — SOA, CCM, MVC, REST *(was Part-B Q9, and REST again in Part-A Q6)*
3. Compute + storage services across AWS/Google/Azure *(was Part-B Q8)*
4. Reference architectures — the 4 tiers *(was Part-B Q10c)*
5. MapReduce **with the word-count example** *(was Part-B Q10a)*
6. Analytics services across providers *(was Part-B Q10b)*
7. Virtualization + hypervisor *(was Part-A Q2)*
8. Essential characteristics *(was Part-A Q1)*
9. Cloud application services *(was Part-A Q3)* · OpenStack *(Part-A Q4)* · storage approaches pros/cons *(Part-A Q5)*

Everything after that — load balancing, replication, database services, boto, SLA/billing, IDAM — is second-priority insurance for a reworded paper.

**Exam-hall tactics**
1. Do Part-A first (12 marks) — target 20 minutes. Note that last year's Part-A asked *two* things per question ("Define X? Explain Y"), so answer **both halves**: budget ~4 lines, not 2.
2. In Part-B, attempt whichever THREE you know best; **Q10 counts as a full question**, so if two of Q7–Q9 look shaky, take Q10.
3. Draw a diagram in every Part-B answer — virtualization stack, MapReduce dataflow, cloud reference model, 4-tier deployment architecture, SOA layers, MVC triangle. Label it.
4. Use headings and bullets, not paragraphs. Bold the keyword the examiner is scanning for.
5. Every "explain" answer = **definition → labelled diagram → numbered points → one example**.
