# CYBER SECURITY AND CYBER LAWS — UNIT 2

## Exam-Ready Question Bank (8-Mark & 2-Mark Answers)

---

# ═══════════════════════════════════════

# SECTION 1: 8 MARK ANSWERS

# ═══════════════════════════════════════

---

## Q1. Define Computer Security. Explain the CIA Triad (Confidentiality, Integrity, Availability) in detail.

### Introduction

Computer security is the protection of computer systems and information from harm, theft, and unauthorized access. Computer hardware is typically protected by the same means used to protect other valuable or sensitive equipment. Computer and Network security is built on three pillars known as the CIA Triad — Confidentiality, Integrity, and Availability.

### The Four Major Threats to Computer Security

1. **Theft of data** — such as theft of military secrets from government computers.
2. **Vandalism** — including the destruction of data by a computer virus.
3. **Fraud** — such as employees at a bank channeling funds into their own accounts.
4. **Invasion of privacy** — such as illegal accessing of protected personal financial or medical data from a large database.

### The CIA Triad

**1. Confidentiality:**

- Preventing the disclosure of data to unauthorized parties.
- Also keeping the identity of authorized parties involved in sharing and holding data private and anonymous.
- Confidentiality is often compromised by cracking poorly encrypted data, Man-in-the-Middle (MITM) attacks, and disclosing sensitive data.
- Standard measures to establish confidentiality:
  - Data encryption
  - Two-factor authentication
  - Biometric verification
  - Security tokens

**2. Integrity:**

- Refers to protecting information from being modified by unauthorized parties.
- Ensures that data remains accurate, complete, and trustworthy.
- Standard measures to guarantee integrity:
  - Cryptographic checksums
  - Using file permissions
  - Data backups

**3. Availability:**

- Making sure that authorized parties are able to access the information when needed.
- Ensures systems and data are accessible and operational at all times.
- Standard measures to guarantee availability:
  - Backing up data to external drives
  - Implementing firewalls
  - Having backup power supplies
  - Data redundancy

### Additional Security Concepts (Part of CIA Model)

- **Identification** — A method of ensuring that a user is the entity it claims to be (e.g., username or account number).
- **Authentication** — Proving identity using multifactor authentication like password, biometric, passport, ID, etc.
- **Authorization** — Determining what a user is allowed to access.
- **Accountability (Auditing)** — Tracing an action to a user's identity and proving who performed a given action (non-repudiation).

### Conclusion

The CIA Triad forms the foundation of computer and network security. Along with identification, authentication, authorization, and accountability, these concepts create a comprehensive security framework that organizations must implement to protect their systems and data.

[COPY_8_MARK_1]

---

## Q2. Explain the various types of Threats and Vulnerabilities in Computer Security. What are the Countermeasures?

### Introduction

In computer security, a vulnerability is a weakness in a system, a threat is a possible danger to the system, and countermeasures are techniques for protecting the system. Understanding these three concepts is essential for building a resilient security posture.

### Types of Vulnerabilities

1. **Physical Vulnerabilities** — An intruder breaks into buildings and equipment/server rooms to gain unauthorized physical access.
2. **Natural Vulnerabilities** — Computers are vulnerable to natural disasters such as fire, flood, earthquakes, power loss, and environmental threats like dust, humidity, and uneven temperature.
3. **Hardware and Software Vulnerabilities** — Flaws or weaknesses in hardware components or software applications that can be exploited.
4. **Media Vulnerabilities** — Damaged backup media that may lead to data loss or inability to recover information.
5. **Communication Vulnerabilities** — Interception of data during transmission over communication channels.
6. **Human Vulnerabilities** — Poorly trained administrators or careless users who may inadvertently create security gaps.

### Types of Threats

1. **Natural and Physical Threats:**
   - Threats related to fire, flood, power failures, and other disasters.
   - Cannot prevent such disasters but can be detected quickly using fire alarms, sensors, etc.

2. **Unintentional Threats:**
   - Ignorance creates dangers.
   - More information is compromised, corrupted, or lost through ignorance than through any other cause.

3. **Intentional Threats:**
   - Threats from outsiders (hackers, cybercriminals) and insiders (disgruntled employees).
   - These are deliberate attempts to breach security.

### Countermeasures

1. **Computer Security** — Implementing access controls, encryption, antivirus software, firewalls, and intrusion detection systems.
2. **Communication Security** — Securing data in transit through encryption protocols, VPNs, and secure communication channels.
3. **Physical Security** — Protecting physical assets through locks, surveillance cameras, access cards, biometric systems, and environmental controls.

### Conclusion

A comprehensive security strategy must address all types of vulnerabilities and threats through appropriate countermeasures. Organizations should adopt a layered defense approach that combines computer, communication, and physical security measures.

[COPY_8_MARK_2]

---

## Q3. Explain Information Protection and Access Controls in detail. Discuss the types and methods of Access Control.

### Introduction

Access control is a security technique that regulates who or what can view or use resources in a computing environment. It is a fundamental concept in security that minimizes risk to the business or organization.

### Types of Access Control

**1. Physical Access Control:**

- Limits access to campuses, buildings, rooms, and physical IT assets.
- Can be implemented through:
  - Access card readers
  - Auditing and reports to track employee access to restricted business locations and proprietary areas such as data centers
  - Access control panels to restrict entry to rooms and buildings
  - Alarms and lockdown capabilities to prevent unauthorized access or operations

**2. Logical Access Control:**

- Limits connections to computer networks, system files, and data.
- Logical access control systems perform identification, authentication, and authorization of users.
- Methods used include:
  - Passwords
  - Personal Identification Numbers (PINs)
  - Biometric scans
  - Security tokens
  - Other authentication factors
- **Multifactor Authentication (MFA)** — Requires two or more authentication factors and is often an important part of a layered defense to protect access control systems.

### Access Control Process

1. **Identification** — The user claims an identity (e.g., username, account number).
2. **Authentication** — The system verifies the claimed identity using one or more authentication factors.
3. **Authorization** — After successful authentication, the system determines what resources the user can access.
4. **Accountability** — All actions are logged and can be traced back to the user (non-repudiation).

### Government Requirements

- Computer vendors selling workstations to the government are forced to build security into their products.
- Most government agencies specify security requirements along with operational requirements.
- Sellers need to use encryption to protect stored and transmitted data.
- Government agencies need to protect sensitive information from theft, modification, and data breaches, and ensure the integrity of information.

### Conclusion

Access control is the first line of defense in any security architecture. A combination of physical and logical access controls, along with multifactor authentication, creates a robust security framework that protects organizational resources from unauthorized access.

[COPY_8_MARK_3]

---

## Q4. Describe the Computer Security Efforts and the evolution of security standards. Explain the role of NCSC.

### Introduction

Computer security has evolved significantly since the 1950s, with various organizations and standards playing crucial roles in shaping modern security practices. Understanding this evolution helps appreciate the current state of cybersecurity.

### Evolution of Computer Security Efforts

**1. 1950s — TEMPEST:**

- TEMPEST is the process of protecting sensitive equipment from emanating electromagnetic radiation (EMR) that may carry classified information.
- Standards that strive to prevent outright data theft were first established.

**2. 1960s — Early Public Awareness:**

- The Department of Defense (DoD), National Institute of Standards and Technology (NIST), and National Security Agency (NSA) first initiated public awareness of security.

**3. 1967 — DoD Studies:**

- The Department of Defense studied threats to computer systems and information in detail.

**4. DARPA's Contribution:**

- Defense Advanced Research Projects Agency (DARPA) worked on identifying vulnerabilities and threats.
- Introduced methods to safeguard systems and controlled access to defense computer systems, networks, and information.

**5. 1970 — Landmark Document:**

- "Security Controls for Computer Systems" was published — a landmark document in the history of computer security.

**6. 1970s — Tiger Teams:**

- Government and industry-sponsored teams of crackers emerged on the computer scene.
- They attempted to break down systems, identify security patches and flaws.
- Sponsored by DoD for penetration testing purposes.

### Standards for Secure Systems

- **National Bureau of Standards (NBS)**, also known as **NIST**, is responsible for the development of all kinds of standards.
- NBS sponsored a conference on computer security in collaboration with **ACM (Association of Computing Machinery)**.
- Three key areas required attention:
  - **Policy** — What security rules should be enforced for sensitive information?
  - **Mechanisms** — What hardware and software mechanisms are needed to enforce the policy?
  - **Assurance** — What needs to be done for mechanisms to support the policy even when the system is subjected to threats?

### National Computer Security Center (NCSC) Goals

1. Encourage the widespread availability of trusted computer systems.
2. Evaluate the technical protection capabilities of industry- and government-developed systems.
3. Provide technical support of government and industry groups engaged in computer security R&D.
4. Develop technical criteria for the evaluation of computer systems.
5. Evaluate commercial systems.
6. Conduct and sponsor research in computer and network security technology.
7. Develop and provide access to verification and analysis tools.
8. Conduct training in areas of computer security.
9. Disseminate computer security information to other branches of the federal government and to industry.

### Conclusion

The evolution of computer security from TEMPEST in the 1950s to modern standards reflects the growing importance of cybersecurity. Organizations like NCSC, NIST, and DARPA have played crucial roles in establishing standards, evaluating systems, and promoting security awareness.

[COPY_8_MARK_4]

---

## Q5. Explain Computer Security Mandates, Legislation, and Privacy Considerations.

### Introduction

Computer security mandates and legislation aim to protect information, define computer crimes, and safeguard individual privacy. These legal frameworks are essential for creating a secure digital environment with proper accountability.

### Computer Security Mandates and Legislation

**1. Protection of Classified or Sensitive Information:**

- Legislation mandates computer security practices by federal agencies and contractors.
- Organizations that process classified or sensitive unclassified government information must protect that information from unauthorized access.
- Encryption must be used to protect stored and transmitted data.

**2. Computer Crime Legislation:**

- Legislation defines computer crime as an offense.
- Extends other regulations to cover thefts and other abuses carried out by computers and other new techniques.
- In addition to federal policies, virtually all U.S. states have enacted their own legislation prohibiting computer crime and abuse.
- **Computer crime** is an act performed by a knowledgeable computer user (sometimes called a "hacker") that illegally browses or steals a company's or individual's private information.
- Examples of computer crimes:
  - Child pornography — Making, distributing, storing, or viewing child pornography
  - Click fraud — Fraudulent clicks on Internet advertisements
  - Copyright violation — Stealing or using another person's copyrighted material without permission
  - Cracking — Breaking or deciphering codes designed to protect data

**3. Privacy Legislation:**

- Protects the privacy of information maintained about individuals (e.g., health and financial records).
- Another consideration is the practice of merging records from multiple, seemingly benign databases into profiles that may reveal devastating amounts of information about an individual.

### Key Privacy Laws

- **HIPAA (Health Insurance Portability and Accountability Act)** — Protects personal health information.
- **FERPA (Family Educational Rights and Privacy Act)** — Protects student educational records.

### Privacy Considerations

- The ability to collect and manage information doesn't necessarily confer the right to save, analyze, and publicize that information.
- High-profile cases demonstrate privacy concerns — for example, airlines being asked to turn over records of millions of passengers to be combined with credit bureau data to determine if fliers fit a terrorist profile.
- Such practices represent a massive invasion of privacy as they involve rapidly combining information from several different databases.

### Organizations Providing Assistance

- **DARPA (Defense Advanced Research Projects Agency)** — Works on identifying vulnerabilities and threats.
- **CERT (Computer Emergency Response Team)** — Provides assistance regarding attacks over the internet.
- **ISACs (Information Sharing and Analysis Centers)** — Help develop best practices for protecting critical infrastructures and minimizing vulnerabilities.

### Conclusion

Computer security mandates and legislation provide the legal framework for protection of information, prosecution of computer crimes, and safeguarding of individual privacy. As technology evolves, these laws must be updated to address new threats and privacy challenges.

[COPY_8_MARK_5]

---

## Q6. What is E-Commerce? Explain the Conceptual Framework, Modes, and Types of Players in E-Commerce.

### Introduction

E-Commerce refers to the conduct of business and business transactions of any kind between parties on the internet and cyberspace. The traditional method involved contracts specifically written on paper documents, but e-commerce has transformed this into digital transactions.

### Definitions of E-Commerce

- **World Trade Organization (WTO):** "E-commerce is the production, distribution, marketing, sales, or delivery of goods and services by electronic means."
- **Consumer Protection Act, 2019:** "Buying or selling of goods or services including digital products over digital or electronic network."

### Starting an E-Commerce Business

The following points need to be followed:

- Market research
- Financial commitment and legal agreement
- Awareness of problems in business and types of transactions
- Include certain terms and conditions in the contract that are profitable and favorable
- New business can be started with a single owner rather than partnership

### Growth and Development of E-Commerce

- E-commerce has become popular especially in corporate sectors due to the scope of publicity.
- During COVID-19 and worldwide lockdown, e-commerce acted like a backbone for business and market industry.
- Not only for purchasing goods but also for availing services.
- Jurisdiction for internet-based disputes has become an important consideration.

### Various Modes of E-Commerce

1. **Advertising, sale, lease, or license of tangible products** — Example: Books, machinery, buildings, land, vehicles.
2. **Advertising, sale, lease, or license of intangible products** — Example: IPR, copyrights, goodwill, patent, e-newspaper, online storage.
3. **Advertising, sale, lease, or license of services** — Example: Online ticket booking, online games, online banking.
4. **Advertising, sale, lease, or license of tangible products over the internet.**

### Types of Players in E-Commerce

1. Network Provider
2. User
3. Website
4. Payment Providers
5. Payment System Provider
6. Software Architects
7. Advertiser
8. Content Provider
9. Back End Systems
10. Search engines like Google, Yahoo, etc.

### Mechanism of Internet Operation

- All communicating devices are connected to the internet with their unique IP numbers.
- Protocols like TCP/IP are used for data transmission.
- Data is sent in the form of packets using the shortest path to destination.
- For better security, packets are encrypted.

### Conclusion

E-commerce has revolutionized the way business is conducted, especially during the COVID-19 pandemic. Understanding its framework, modes, and key players is essential for both businesses and consumers in the digital economy.

[COPY_8_MARK_6]

---

## Q7. Explain the salient features of the Consumer Protection Act, 2019 with reference to E-Commerce.

### Introduction

The Consumer Protection Act, 2019 introduced significant changes to address the growing landscape of online and e-commerce transactions. The earlier Consumer Protection Act, 1986 was silent on online commercial transactions, and the IT Act, 2000 also did not provide an adequate framework.

### Salient Features of Consumer Protection Act, 2019

**1. Definition of Consumer:**

- A person who "buys any goods" and "hires or avails of any service."
- Does NOT include a person who obtains goods for resale or commercial purpose.

**2. Definition of E-Commerce:**

- The CPA 1986 was silent on online commercial transactions.
- The IT Act, 2000 also did not provide adequate framework.
- CPA 2019 defined e-commerce as "buying or selling of goods or services including digital products over a digital or electronic network."

**3. Specification of Rights of Consumers:**

- The Act expressed rights of consumers under Section 2(9) of CPA, 2019.

**4. Establishment of Central Consumer Protection Authority (CCPA):**

- Sections 10–27 of CPA, 2019 provide for the establishment of CCPA.
- Responsible for promoting, protecting, and enforcing consumer rights.

**5. Key Concept of Product Liability:**

- Under Section 2(34) of CPA, 2019.
- Defines the responsibility of a product seller, manufacturer, or service provider for harm caused to consumers.

**6. Definition of Electronic Service Provider:**

- Under Section 2(17) of CPA, 2019.
- The person who provides technologies to enable a product seller to engage in advertising/selling goods/services to a consumer, including online marketplace or online auction sites.

**7. Definition of Misleading Advertisement:**

- An advertisement which falsely describes the product or service.

**8. Establishment of Consumer Dispute Redressal Commission (CDRC):**

- Sections 28–73 provide for setting up of CDRC for dispute resolution.

**9. Special Provisions on Offences and Penalties:**

- Sections 88–93 regarding misleading advertisements — fines with imprisonment.

**10. Introduction of Mediation:**

- Under Section 2(25) of CPA 2019, mediation is defined as the process by which a mediator mediates consumer disputes.
- Sections 74–81 allow consumers to resolve disputes faster without approaching commissions.

### Conclusion

The Consumer Protection Act, 2019 is a landmark legislation that provides comprehensive protection to consumers in the age of e-commerce. It addresses the gaps in earlier laws by defining e-commerce, establishing regulatory authorities, and introducing new concepts like product liability and mediation.

[COPY_8_MARK_7]

---

## Q8. Explain the Role of Electronic Signatures in E-Commerce with reference to Indian Law.

### Introduction

Electronic signatures play a crucial role in e-commerce by providing authentication, integrity, and non-repudiation of electronic records and transactions. The Indian legal framework has evolved to recognize and regulate the use of electronic and digital signatures.

### Basic Laws of Digital and Electronic Signatures in India

- The Information Technology Act, 2000 provides the legal framework for digital signatures in India.
- Authentication of digital signatures and electronic records is governed under this act.
- Authentication of electronic signatures and electronic records ensures the identity of signers and integrity of documents.

### International Framework — UNCITRAL

- **UNCITRAL (United Nations Commission on International Trade Law):** Model law on electronic commerce, 1996 — provided the international framework for e-commerce legislation.
- **UNCITRAL Draft Rules of November, 1998** — Further refined the rules governing electronic transactions.

### Securing Electronic Transactions

- **Cryptography** is used for securing electronic transactions.
- **Hash Functions** — Used to create a unique digital fingerprint of a document. Any modification in the document changes the hash value, thus ensuring integrity.
- Digital signatures use asymmetric cryptography (public and private keys) to authenticate the signer.

### Certification and Certifying Authorities

- **Certifying Authorities (CAs)** issue digital certificates that bind a public key to an entity.
- The **Controller of Certifying Authorities** is appointed under Indian law to oversee and regulate CAs.
- Functions include authentication and verification of electronic/digital signatures.

### Cost and Benefits of Implementing Electronic/Digital Signatures

- **Benefits:** Faster transactions, reduced paperwork, enhanced security, legal validity, convenience.
- **Costs:** Infrastructure setup, certificate acquisition, training, and maintenance.

### Security and Privacy Concerns

- **Private Key Escrow** and **Key Recovery Systems** — Mechanisms for recovering lost private keys while maintaining security.
- Obligations of certifying authorities include proper certificate management and maintaining security.
- Security threats to cyberspace and e-commerce must be continuously addressed.

### Types of Websites

- **Passive and Interactive Sites** — Provide information in a read-only format.
- **Interactive Sites** — Encourage the browser to enter information, identifying the browser and providing background on the browser's interests or buying habits.

### International Efforts

- Various countries have enacted laws relating to electronic/digital signatures.
- **US Efforts** — The Electronic Signatures in Global and National Commerce Act (E-Sign Act).
- **Singapore Electronic Transaction Act, 1998** — Provides guidelines for electronic transactions.

### Conclusion

Electronic signatures are fundamental to the growth of e-commerce as they provide legal validity, authentication, and security to digital transactions. The Indian legal framework, supported by international guidelines like UNCITRAL, has established a comprehensive system for the use and regulation of electronic signatures.

[COPY_8_MARK_8]

---

## Q9. Explain International Security Activity and its significance in Cyber Security.

### Introduction

International security, also called global security, is a term which refers to the measures taken by states and international organizations to ensure mutual survival and safety. In the context of cyber security, international cooperation is essential for combating cross-border cyber threats.

### Definition

International security refers to the measures taken by states and international organizations — such as the United Nations, European Union, and others — to ensure mutual survival and safety. These measures include military action and diplomatic agreements such as treaties and conventions.

### Relationship Between International and National Security

- International and national security are invariably linked.
- International security is national security or state security in the global arena.
- A cyber attack on one nation can have cascading effects on other nations due to interconnected digital infrastructure.

### Key Organizations and Their Roles

**1. United Nations (UN):**

- Promotes international cooperation on cybersecurity issues.
- Establishes norms and standards for responsible state behavior in cyberspace.

**2. European Union (EU):**

- Enacted regulations like GDPR for data protection.
- Established ENISA (European Union Agency for Cybersecurity).

**3. DARPA (Defense Advanced Research Projects Agency):**

- Works on identifying vulnerabilities and threats.
- Introduces methods to safeguard systems.

**4. CERT (Computer Emergency Response Team):**

- Provides assistance regarding attacks over the internet.

**5. ISACs (Information Sharing and Analysis Centers):**

- Help in developing best practices for protecting critical infrastructures.
- Minimize vulnerabilities through information sharing.

### Measures for International Security

1. **Military Action** — Defense against state-sponsored cyber attacks.
2. **Diplomatic Agreements** — Treaties and conventions on cybersecurity cooperation.
3. **Information Sharing** — Sharing threat intelligence among nations.
4. **Joint Exercises** — Collaborative cybersecurity drills.
5. **Legal Frameworks** — International laws governing cybercrime.

### Significance in Cyber Security

- Cyber threats are borderless and require international cooperation.
- Shared threat intelligence helps in early detection and prevention.
- Harmonized legal frameworks facilitate prosecution of cybercriminals across jurisdictions.
- Collaborative defense strengthens collective security posture.

### Conclusion

International security activity is crucial in the digital age as cyber threats transcend national boundaries. Cooperation among nations through organizations like the UN, EU, and various security agencies is essential for maintaining global cybersecurity and protecting critical digital infrastructure.

[COPY_8_MARK_9]

---

## Q10. What is Computer Crime? Explain with examples. Also discuss the role of HIPAA and FERPA in privacy protection.

### Introduction

Computer crime is an act performed by a knowledgeable computer user, sometimes called a "hacker," that illegally browses or steals a company's or individual's private information. The perpetrator may be malicious and destroy or otherwise corrupt the computer or data files.

### Examples of Computer Crime

1. **Child Pornography** — Making, distributing, storing, or viewing child pornography using computer systems and the internet.
2. **Click Fraud** — Fraudulent clicks on internet advertisements to generate false revenue or drain competitor's advertising budget.
3. **Copyright Violation** — Stealing or using another person's copyrighted material without permission, including software piracy and illegal downloads.
4. **Cracking** — Breaking or deciphering codes designed to protect data, gaining unauthorized access to systems.

### Categories of Computer Crime Legislation

1. **Protection of classified or sensitive information** — Organizations processing classified or sensitive government information must protect it from unauthorized access.
2. **Computer crime as an offense** — Legislation defines computer crime and extends regulations to cover thefts and abuses carried out by computers.
3. **Privacy protection** — Legislation protecting the privacy of information maintained about individuals.

### Role of HIPAA

**Health Insurance Portability and Accountability Act (HIPAA):**

- Protects personal health information (PHI) from unauthorized disclosure.
- Applies to healthcare providers, health plans, and healthcare clearinghouses.
- Requires implementation of administrative, physical, and technical safeguards.
- Violations can result in significant fines and criminal penalties.
- Makes it a crime to reveal personal information gathered during healthcare business.

### Role of FERPA

**Family Educational Rights and Privacy Act (FERPA):**

- Protects the privacy of student educational records.
- Applies to educational institutions that receive federal funding.
- Gives parents and eligible students rights to access and control their educational records.
- Restricts disclosure of personally identifiable information from education records.

### Privacy Concerns in the Digital Age

- The ability to collect and manage information doesn't confer the right to save, analyze, and publicize that information.
- Merging records from multiple databases into profiles can reveal devastating amounts of information about individuals.
- Organizations like ISACs help develop best practices for protecting critical infrastructures and minimizing vulnerabilities.

### Conclusion

Computer crime legislation and privacy laws like HIPAA and FERPA are essential for protecting individuals and organizations in the digital age. As technology evolves, these laws must be continuously updated to address new forms of cybercrime and privacy threats.

[COPY_8_MARK_10]

---

---

# ═══════════════════════════════════════

# SECTION 2: 2 MARK ANSWERS

# ═══════════════════════════════════════

---

**1. Define Computer Security.**
Computer security is the protection of computer systems and information from harm, theft, and unauthorized access. It addresses four major threats: theft of data, vandalism, fraud, and invasion of privacy.

---

**2. What is the CIA Triad?**
The CIA Triad stands for Confidentiality, Integrity, and Availability — the three pillars of computer and network security. Confidentiality prevents unauthorized disclosure, Integrity protects data from modification, and Availability ensures data is accessible when needed.

---

**3. Define Confidentiality in computer security.**
Confidentiality means preventing the disclosure of data to unauthorized parties. It also involves keeping the identity of authorized parties private and anonymous. Standard measures include data encryption, two-factor authentication, biometric verification, and security tokens.

---

**4. What is Integrity in the context of security?**
Integrity refers to protecting information from being modified by unauthorized parties. Standard measures to guarantee integrity include cryptographic checksums, using file permissions, and maintaining data backups.

---

**5. Define Availability in security.**
Availability means making sure that authorized parties are able to access the information when needed. Measures include backing up data to external drives, implementing firewalls, having backup power supplies, and data redundancy.

---

**6. Differentiate between Authentication and Authorization.**

- **Authentication** is the process of proving the identity of a user (e.g., using passwords, biometrics, IDs).
- **Authorization** determines what resources the authenticated user is allowed to access.

---

**7. What is Accountability (Auditing) in security?**
Accountability, also referred to as Auditing, means tracing an action to a user's identity. It provides non-repudiation by proving who or what performed a given action on the system.

---

**8. Define Vulnerability, Threat, and Countermeasure.**

- **Vulnerability** — A weakness in a system.
- **Threat** — A possible danger to the system.
- **Countermeasure** — A technique for protecting the system against threats.

---

**9. What are Physical Vulnerabilities?**
Physical vulnerabilities occur when an intruder breaks into buildings and equipment/server rooms. They involve unauthorized physical access to computing infrastructure and hardware assets.

---

**10. What is TEMPEST?**
TEMPEST is the process of protecting sensitive equipment from emanating electromagnetic radiation (EMR) that may carry classified information. It was one of the earliest computer security standards developed in the 1950s.

---

**11. What are Tiger Teams?**
Tiger Teams are government and industry-sponsored teams of crackers that first emerged on the computer scene in the 1970s. They attempt to break down systems, find security patches and flaws. They were sponsored by the Department of Defense for penetration testing.

---

**12. What is NCSC?**
The National Computer Security Center (NCSC) was founded to encourage the widespread availability of trusted computer systems, evaluate technical protection capabilities, develop technical criteria for evaluation, conduct security research, and disseminate security information.

---

**13. Define Computer Crime.**
Computer crime is an act performed by a knowledgeable computer user ("hacker") that illegally browses or steals a company's or individual's private information. The person may also destroy or corrupt computer or data files.

---

**14. What is HIPAA?**
HIPAA (Health Insurance Portability and Accountability Act) is a law that makes it a crime to reveal personal information gathered during healthcare business. It protects personal health information from unauthorized disclosure.

---

**15. What is FERPA?**
FERPA (Family Educational Rights and Privacy Act) is a law that protects the privacy of student educational records. It applies to educational institutions receiving federal funding and restricts disclosure of personally identifiable student information.

---

**16. Define E-Commerce.**
According to the World Trade Organization, "E-commerce is the production, distribution, marketing, sales, or delivery of goods and services by electronic means." The Consumer Protection Act, 2019 defines it as "buying or selling of goods or services including digital products over digital or electronic network."

---

**17. What is DARPA?**
DARPA (Defense Advanced Research Projects Agency) is an organization that works on identifying vulnerabilities and threats to computer systems. It introduced methods to safeguard systems and controlled access to defense computer systems, networks, and information.

---

**18. What is CERT?**
CERT (Computer Emergency Response Team) is an organization that provides assistance with regard to attacks over the internet. It helps in detecting, responding to, and recovering from cybersecurity incidents.

---

**19. What are ISACs?**
Information Sharing and Analysis Centers (ISACs) are organizations that help in developing best practices for protecting critical infrastructures and minimizing vulnerabilities through information sharing among member organizations.

---

**20. What is Access Control?**
Access control is a security technique that regulates who or what can view or use resources in a computing environment. It is of two types: Physical access control (limits access to buildings and physical assets) and Logical access control (limits connections to computer networks and data).

---

**21. What is Multifactor Authentication (MFA)?**
Multifactor Authentication (MFA) requires two or more authentication factors to verify a user's identity. It is an important part of a layered defense to protect access control systems. Factors include passwords, biometric scans, and security tokens.

---

**22. What are the modes of E-Commerce?**
E-Commerce operates through four modes: (1) Sale/lease of tangible products (books, machinery), (2) Sale/lease of intangible products (IPR, copyrights), (3) Sale/lease of services (online banking, ticket booking), and (4) Sale of tangible products over the internet.

---

**23. What is Product Liability under CPA 2019?**
Product Liability, defined under Section 2(34) of CPA, 2019, refers to the responsibility of a product seller, manufacturer, or service provider for any harm caused to the consumer due to a defective product or deficient service.

---

**24. What is CCPA under CPA 2019?**
The Central Consumer Protection Authority (CCPA) is established under Sections 10–27 of CPA, 2019. It is responsible for promoting, protecting, and enforcing consumer rights at the national level.

---

**25. What is International Security?**
International security, also called global security, refers to the measures taken by states and international organizations — such as the United Nations, European Union — to ensure mutual survival and safety. It includes military action and diplomatic agreements like treaties and conventions.

---

[COPY_ALL_2_MARKS]
